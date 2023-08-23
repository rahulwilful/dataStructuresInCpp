#include<bits/stdc++.h>

using namespace std;

template<typename T>
class node{
public:
    T data;
    node<T> *next;

    node(T data)
    {
        this->data = data;
        next = NULL;
    }

};

template<typename T>
class que{
    node<T> *head;
    node<T> *tail;
    int size;

public:
    que()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void push(T data)
    {
        node<T> *n = new node<T>(data);

        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = tail->next;
        }

        size++;
    }

    void pop()
    {
        if(head == NULL)
        {
            cout<<"queue is empty"<<endl;
            return;
        }

        node<T> *temp = head;
        head = head->next;
        temp = NULL;
        delete temp;
        size--;
    }

    T first()
    {
        if(head == NULL)
        {
            cout<<"queue is empty"<<endl;
            return 0;
        }

        return head->data;
    }

    int getsize()
    {
        if(head == NULL)
        {
            cout<<"queue is empty"<<endl;
            return 0;
        }

        return size;
    }

    bool IsEmpty()
    {
        return size == 0;
    }
};

int main()
{
    que<int> q;

    cout<<q.getsize()<<endl<<endl;

    q.push(10);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    cout<<q.getsize()<<endl<<endl;

    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    q.pop();

    cout<<endl<<q.IsEmpty()<<endl;
}

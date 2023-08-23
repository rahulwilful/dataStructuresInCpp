#include<bits/stdc++.h>

using namespace std;

template<typename T>
class node{


public:
    int data;
    node<T> * next;

    node(T data)
    {
        this->data = data;
        next = NULL;
    }

};

template<typename T>
class sstack{
    node<T> * head;
    int size;

public:

    sstack()
    {
        head = NULL;
        size = 0;
    }

    bool IsEmpty()
    {
        return size == 0;
    }

    int ssize()
    {
        return size;
    }

    T top()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty"<<endl;
            return head->data;

        }

        return head->data;
    }

    void push(T data)
    {
        node<T> * n = new node<T>(data);
        n->next = head;
        head = n;
        size++;
    }

    void pop()
    {
        if(head == NULL)
        {
            cout<<"stack is empty cannot perform pop operation"<<endl;
            return;
        }
        node<T>* temp = head;
        cout<<"poping "<<head->data<<endl;
        head = head->next;
        temp->next=NULL;
        delete temp;
        size--;
    }


};


template<typename T>
class Node{

public:
    T data;
    Node<T> * next;

    Node(T data)
    {
        this->data = data;
        next == NULL;
    }

};

template<typename T>
class stack1{

 Node<T> * head;
 int I;

public:
    stack1()
    {
        head = NULL;
        I = 0;
    }

    int size()
    {
        return I;
    }

    bool isEmpty()
    {
        return I==0;
    }

    void push(T data)
    {
        Node<T> * n =new Node<T>(data);
        if(head == NULL)
        {
            head = n;
            I++;
            return;
        }

        n->next = head;
        head = n;
        I++;
    }

    void pop()
    {
        if(isEmpty()){
            cout<<"Stack Is Empty"<<endl;
            return;
        }
        Node<T> * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        I--;

    }

    T top(){
        if(isEmpty()){
            cout<<"Stack Is Empty"<<endl;
            return 0;
        }

        return head->data;
    }
};

int main()
{
    stack1<int> n1;

    n1.push(1);
    n1.push(2);
    n1.push(3);
    n1.push(4);
    n1.push(5);



    cout<<n1.size()<<endl;
    cout<<n1.isEmpty()<<endl;

     cout<<endl<<endl;

    cout<<n1.top()<<endl;
    n1.pop();
    cout<<n1.top()<<endl;
    n1.pop();
    cout<<n1.top()<<endl;
    n1.pop();
    cout<<n1.top()<<endl;
    n1.pop();
    cout<<n1.top()<<endl;
    n1.pop();
    cout<<n1.top()<<endl;
    n1.pop();


    cout<<endl<<endl;

    cout<<n1.size()<<endl;
    cout<<n1.isEmpty()<<endl;
}


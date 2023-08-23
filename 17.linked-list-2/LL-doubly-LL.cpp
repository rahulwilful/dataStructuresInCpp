#include<bits/stdc++.h>

using namespace std;

class node{

public:
    int data;
    node * next;
    node * prev;

    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }

};

node * takein()
{
    int data;
    cin>>data;

    node *head = NULL;
    node *tail  =NULL;

    node * temp = NULL;

    while(data != -1)
    {
        node *n = new node(data);
        if(head == NULL)
        {
            head = n;
            tail = n;
            temp = n;
        }
        else{
            tail->next = n;
            tail = tail->next;
            tail->prev = temp;
            temp = n;
        }
        cin>>data;
    }
    return head;
}


node * takeIn1()
{
    int data;
    node * head = NULL;
    node * tail = NULL;
    cin>>data;

    while(data > 0)
    {
        node * n = new node(data);
        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

void printFromTail(node * head)
{
    cout<<endl;
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->prev;
    }
    cout<<"NULL"<<endl;
}

void print(node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";

        if(head->next == NULL)
        {
            printFromTail(head);
        }
         head = head->next;
    }
    cout<<"NULL"<<endl;


}




int main()
{
    node *head = takeIn1();

    print(head);
}


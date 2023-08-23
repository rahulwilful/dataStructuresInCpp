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

node * takeIn()
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
            tail->next = head;


        }
        else{
            tail->next = n;
            n->prev = tail;
            tail = n;
            tail->next = head;
            head->prev = n;

        }
        cin>>data;
    }

    return head;
}

void print(node * head)
{
    node * temp = head;

    while(temp->next != head)
    {

        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<"->"<<"NULL"<<endl;

    node * temp2 = head;

    while(temp2->prev != head)
    {

        cout<<temp2->data<<"->";
        temp2 = temp2->prev;
    }
    cout<<temp2->data<<"->"<<"NULL"<<endl;
}

void print2(node * head)
{
    node * temp = head;
    int flag = 0;
    while(flag != 2)
    {
        if(temp->next == head)
        {
            flag++;
        }
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node * head = takeIn();

    print(head);
}


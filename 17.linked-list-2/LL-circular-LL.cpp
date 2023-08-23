#include<bits/stdc++.h>

using namespace std;

class node{

public:
    int data;
    node * next;

    node(int data)
    {
        this->data = data;
        next = NULL;
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
            tail = n;
            tail->next = head;
        }
        cin>>data;
    }

    return head;
}

void print(node * head)
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

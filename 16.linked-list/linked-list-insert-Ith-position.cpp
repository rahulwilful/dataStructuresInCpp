#include<bits/stdc++.h>

using namespace std;

class node{

public:
    int data;
    node *next; ///" next node " to store next nodes address

    node(int data)
    {
        this->data=data;
        next= NULL;
    }
};

node *takein()
{
    int data;
    cin>>data;

    node *head=NULL;
    node *tail=NULL;

    while(data != -1)
    {
        node *n =  new node(data);

        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else{
            tail -> next = n;
            tail = tail -> next;
        }
        cin>>data;
    }
    return head;
}

void print(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

node* insert(node *&head,int data,int i)
{

    if(i<0)
    {
        cout<<"invalid"<<endl;
        return head;
    }
    if(i==0)
    {
        node *n = new node(data);
        n -> next = head;
        head = n;
        return head;
    }

    int count =1;

    while(count <=i-1 && head != NULL)
    {
        head = head->next;
        count++;
    }
    if(head)
    {
        node *n =  new node(data);
        n->next=head->next;
        head->next = n;
        return head;
    }
    return head;



}

  ///replacing a data at Ith node
    /*int count = 0;
    while(head != NULL)
    {
        if(count == i)
        {
            head->data=data;
            break;
        }
        count++;
        head = head->next;

    }*/



int main()
{
    node *head = takein();
    print(head);
    insert(head,22,1);
    print(head);
}

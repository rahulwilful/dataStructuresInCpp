#include<bits/stdc++.h>

using namespace std;

class node{

public:
    int data;
    node *next;


    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

 void  print(node *&head)
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

node *takein()  ///taking input of data and creating new nodes
{
    int data;        // initialising data to take input
    cin>>data;

    node *head=NULL;  //head and tail to specify start node and end node
    node *tail=NULL;

    while(data!=-1)
    {
        node *n = new node(data);      //creating nodes dynamically at every iteration

        if(tail == NULL)     //if head is null than set head and tail as start node and  update head to
        {                      // link nodes after every iteration
            head = n;
            tail = n;
        }
        else
        {
            n -> next = head;   //updating head for every new node created
            head = n;
        }

        cin>>data;
    }

    return head;  //returning head
}

node * takeIn1()
{
    int data;
    node * head = NULL;
    node * tail = NULL;

    cin>>data;

    while(data != -1)
    {
        node * n = new node(data);
         if(tail == NULL)
         {
             head = n;
             tail = n;
         }else{
            n->next = head;
            head = n;
         }
         cin>>data;
    }
    return head;
}

int main()
{
    node *head = takeIn1();
    print(head);
}

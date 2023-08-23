#include<bits/stdc++.h>

using namespace std;

class node{  ///class to create new  nodes

public:
    int data;
    node *next;


    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

 void  print(node *&head)  ///function to print linked list
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
    int data;   // initialising data to take input
    cin>>data;

    node *head=NULL; //head and tail to specify start node and end node
    node *tail=NULL;

    while(data!=-1)
    {
        node *n = new node(data); //creating nodes dynamically at every iteration

        if(head == NULL) //if head is null than set head and tail as start node and tail to update and
        {                // link tail after every iteration
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;  //updating tail for every new node created
            tail = tail->next;
        }

        cin>>data;  //taking new data to create new nodes
    }

    return head; //returning head as start node
}

int length(node *head)
{
    int count=0;
    while(head !=  NULL)
    {
        head=head->next;
        count++;
    }

    return count;
}

int main()
{
    node *head=takein();
    print(head);
    cout<<length(head)<<endl;
}




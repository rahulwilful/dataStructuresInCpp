




#include<bits/stdc++.h>

using namespace std;

class node{

public:
    int data;
    node *next; ///creating nodes to link other nodes

    node(int data)
    {
        this->data=data;  ///storing data
        next=NULL;
    }

};

void print(node *&head) ///passing by reference
{
    /*
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    */

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}



int main()
{
    ///creating nodes dynamically
    node *n1 = new node(1);
    node *head = n1;   ///n1 is actually head node here we are just defining head node
                       ///if you just hw head nodes address than you can get entire linked list
    node *n2 = new node(2);
    node *n3 = new node(3);
    node *n4 = new node(4);
    node *n5 = new node(5);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    print(n1);    ///you can start  printing from directly 1st node
    print(head);  ///or from head


    /*cout<<n1.data<<" "<<n2.data<<endl;
    n1.next=&n2;  ///storing address of n2 in next of n1
    node *head;   ///creating a head node for first node

    head = &n1; ///storing address of n1 in head

    cout<<head->data;  ///printing data from head
    */


}







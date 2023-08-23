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
    ///creating nodes statically
    node n1(1);
    node *head = &n1;   ///n1 is actually head node here we are just defining head node
                       ///if you just hw head nodes address than you can get entire linked list
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    print(head);
    print(head);



    /*cout<<n1.data<<" "<<n2.data<<endl;
    n1.next=&n2;  ///storing address of n2 in next of n1
    node *head;   ///creating a head node for first node

    head = &n1; ///storing address of n1 in head

    cout<<head->data;  ///printing data from head
    */
}

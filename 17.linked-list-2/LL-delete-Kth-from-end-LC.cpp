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

node * takein()
{
    int data;
    cin>>data;

    node *head = NULL;
    node *tail  =NULL;

    while(data != -1)
    {
        node *n = new node(data);
        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

node * remove(node * head, int k) ///function two remove Kth node from behind in one iteration.
{
    node * two = head;    //taking two nodes starting from head
    node * one = head;

    while(k--)        //function to initialise node two to Kth position from start
    {
        two = two->next;
    }
    if(two == NULL)  //checking if two is NULL after iterating to Kth position
    {
        return one->next;
    }
    while(two->next != NULL) //function two simultaniously move both node to next
    {                         //as two->next reaches NULL one will be at before the desired node
        one = one->next;
        two = two->next;
    }

    one->next = one->next->next;  // removing desired node

    return head;

}

node * remove1(node * head, int k)
{
    node * temp = head;
    node * temp2 = head;
    int count = 1;
    while(count<k)
    {
        temp2 = temp2->next;
        count++;
    }

    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
        temp = temp->next;
    }
    node * temp3 = temp->next;
    temp->next = temp->next->next;

    temp3->next = NULL;
    delete temp3;

    return head;
}

int main()
{
    node *head = takein();

    print(head);

    int k;
    cin>>k;

    head = remove1(head,k);

    print(head);



}


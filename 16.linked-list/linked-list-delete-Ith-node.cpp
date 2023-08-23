#include<bits/stdc++.h>

using namespace std;

class node{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }

};

void print(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head -> next;
    }
    cout<<"NULL"<<endl;
}

node * takein()
{
    int data;
    cin>>data;

    node * head = NULL;
    node * tail = NULL;

    while(data != -1)
    {
        node * n = new node(data);

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

node * deln(node *head , int i)
{
    if(i < 0)
    {
        cout<<"invalid node"<<endl;
        return head;
    }
    if(i==0 && head)
    {
        node* newhead = head->next;
        head->next=NULL;
        delete head;

        return newhead;
    }

    int count = 1;
    node* temp = head;
    while(count <=i-1 && temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    if(temp && temp->next)
    {
        node * temp2 = temp->next;
        temp->next = temp->next->next;
        temp2->next=NULL;
        delete temp2;

        return head;
    }

    return head;
}

node * deleteNode(node *&head ,int i)
{
    if(i<0)
    {


        cout<<"invalid node number";
        return head;
    }

    if(i == 0 && head)
    {
        node * newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }else{
        int count = 1;
        node * temp = head;
        while(count<=i-1 && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }

        if(temp && temp->next)
        {
            node * temp2 = temp->next;
            temp->next = temp->next->next;
            temp->next = NULL;
            delete temp2;

        }
        return head;
    }


}
int main()
{
    node * head = takein();
    print(head);
    int i;
    cin>>i;
    head=deleteNode(head,i);
    print(head);
}

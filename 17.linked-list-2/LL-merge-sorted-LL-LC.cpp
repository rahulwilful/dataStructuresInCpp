
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

node * merge(node *l1,node *l2)
{
    if(l1 == NULL)
    {
        return l2;
    }
    if(l2 == NULL)
    {
        return l1;
    }

    node * fhead = NULL;
    if(l1->data < l2->data)
    {
        fhead = l1;
        l1 = l1->next;
    }
    else{
        fhead = l2;
        l2 = l2->next;
    }

    node * thead = fhead;

    while(l1 && l2)
    {
        if(l1->data < l2->data)
        {
            thead->next = l1;
            l1 = l1->next;
        }
        else{
            thead->next = l2;
            l2 = l2->next;
        }
        thead = thead->next;
    }

    if(l1)
    {
        thead->next = l1;
    }
    else
    {
        thead->next = l2;
    }

    return fhead;
}


int main()
{
    node *head1 = takein();
    print(head1);

    node *head2 = takein();
    print(head2);

    node * LL = merge(head1,head2);

    print(LL);



}


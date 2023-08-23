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

void print(node * head)
{
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

node * merge(node * l1, node * l2)
{
    if(l1 == NULL)
    {
        return l2;
    }
    if(l2 == NULL)
    {
        return l1;
    }

    node * head = NULL;
    if(l1->data < l2->data)
    {
        head = l1;
        head->next = merge(l1->next ,l2);
    }
    else{
        head = l2;
        head->next = merge(l1,l2->next);
    }

    return head;
}

int main()
{
    node * head1 = takein();
    print(head1);

    node * head2 = takein();
    print(head2);

    node * head = merge(head1,head2);

    print(head);



}

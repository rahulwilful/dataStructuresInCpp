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

node * mid(node *head)  ///function to find mid
{
    node *slow = head;  //slow will point towards head
    node *fast = head->next; // fast will point towards head of next

    while(fast && fast->next) //this loop will check fast and fats of next is not null
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if(fast)
    {
        return slow->next;
    }
    return slow;

 }

int main()
{
    node *head = takein();

    print(head);

    node * mid1 = mid(head);

    cout<<mid1->data<<endl;

}

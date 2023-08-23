#include<bits/stdc++.h>

using namespace std;

template<typename T>
class BTnode{

public:
    T data;
    BTnode<T>* left;
    BTnode<T>* right;

    BTnode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BTnode<int>* takeinlevel()
{
    int data;
    cout<<"enter root data: ";
    cin>>data;

    BTnode<int>* root = new BTnode<int>(data);
    queue<BTnode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        BTnode<int>* f = q.front();
        q.pop();

        int ldata;
        cout<<"enter left child for node "<<f->data<<" : ";
        cin>>ldata;
        if(ldata != -1)
        {
            BTnode<int>* child = new BTnode<int>(ldata);
            f->left = child;
            q.push(child);
        }

        int rdata;
        cout<<"enter left child for node "<<f->data<<" : ";
        cin>>rdata;
        if(rdata != -1)
        {
            BTnode<int>* child = new BTnode<int>(rdata);
            f->right = child;
            q.push(child);
        }

    }

    return root;
}
void print(BTnode<int>* root)
{
    if(root == NULL) return;
    cout<<root->data<<": ";

    if(root->left)
    {
        cout<<"L"<<root->left->data<<" ";
    }

    if(root->right)
    {
        cout<<"R"<<root->right->data<<" ";
    }
    cout<<endl;

    print(root->left);
    print(root->right);
}

int total(BTnode<int>* root,int l,int r)
{
    if(root == NULL) return 0;
    int sum = 0;
    if(root->data >= l && root->data <= r)
    {
        sum += root->data;
    }

    if(root->data > r)
    {
        sum += total(root->left,l,r);
    }
    else if(root->data < l)
    {
        sum += total(root->right,l,r);
    }
    else{
        sum += total(root->left,l,r) + total(root->right,l,r);
    }

    return sum;
}

int main()
{
    BTnode<int>* root = takeinlevel();

    print(root);

    cout<<endl<<total(root,2,6)<<endl;



}


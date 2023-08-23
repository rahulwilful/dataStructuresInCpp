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

int max(BTnode<int>* root)
{
    if(root == NULL) return 0;

    while(root->right != NULL)
    {
        root = root->right;
    }

    return root->data;
}

int main()
{
    BTnode<int>* root = takeinlevel();

    print(root);

    cout<<endl<<max(root)<<endl;



}


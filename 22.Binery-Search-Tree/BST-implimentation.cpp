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
    cout<<"end"<<endl;

    return root;
}

void print(BTnode<int>* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    if(root->left != NULL)
    {
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right != NULL)
    {
        cout<<"R"<<root->right->data<<" ";
    }
    cout<<endl;

    print(root->left);
    print(root->right);
}

void searchBST(BTnode<int>* root, int val)
{
 if(root == NULL)
 {
     cout<<"element not found"<<endl;
     return;
 }
    if(root->data == val)
    {
        cout<<root->data;
        return;
    }

    if(val >root->data)
    {
        searchBST(root->right,val);
    }
    else if(val < root->data){
        searchBST(root->left,val);
    }


}

int main()
{
    BTnode<int>* root = takeinlevel();

    print(root);
    int val;
    cout<<endl<<endl;
    cin>>val;
    searchBST(root,val);

}



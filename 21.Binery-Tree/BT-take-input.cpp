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

BTnode<int>* takein()
{
    int rootd;
    cout<<"enter the root data: ";
    cin>>rootd;

    if(rootd == -1)
    {
        return NULL;
    }

    BTnode<int>* root = new BTnode<int>(rootd);
    BTnode<int>* lchild = takein();
    BTnode<int>* rchild = takein();

    root->left = lchild;
    root->right = rchild;

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
        cout<<"L->"<<root->left->data<<" ";
    }
    if(root->right != NULL)
    {
        cout<<"R->"<<root->right->data<<" ";
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}

int main()
{
   BTnode<int>* root = takein();

    print(root);

}


#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Tnode{   /// class to create generic tree

public:
    T data;
    vector<Tnode<T>*>  child;

    Tnode(T data)        //function to create generic tree
    {
        this->data = data;
    }




};

void print(Tnode<int> * root) ///function to print root and child nodes
{
    cout<<root->data<<": ";   //printing first/root node

    for(int i=0;i<root->child.size();i++)  //loop to print child nodes
    {
        cout<<root->child[i]->data<<" ,";
    }
    cout<<endl;

    for(int i=0;i<root->child.size();i++)   //loop to iterate over child and parent nodes
    {
        print(root->child[i]);
    }
}

template<typename T>
class treeNode{
public:
    T data;
    vector<treeNode<T>*> child;

    treeNode(T data)
    {
        this->data = data;
    }

};

void print1(treeNode<int> * root)
{
    if(root == NULL) return;

    cout<<root->data<<": ";
    for(int i=0 ;i <root->child.size();i++)
    {
        cout<<root->child[i]->data<<",";
    }
    cout<<endl;

    for(int i=0 ;i <root->child.size();i++)
    {
        print1(root->child[i]);
    }

}

treeNode<int> * takeIn()
{
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    int n;
    cout<<"number of childrens for "<<data<<endl;
    cin>>n;
    treeNode<int>* root = new treeNode<int>(data);
    for(int i=1;i<=n;i++)
    {
        treeNode<int> * n1 = takeIn();
        root->child.push_back(n1);
    }
    return root;
}

int main()
{
    Tnode<int> * root = new Tnode<int>(1);   ///creating root node
    Tnode<int> * n1 = new Tnode<int>(2);     //creating child  nodes
    Tnode<int> * n2 = new Tnode<int>(3);

    root->child.push_back(n1);   // pushing/connecting child nodes to parent/root node
    root->child.push_back(n2);

    print(root);

    cout<<endl<<endl;

    treeNode<int> * root1 = new treeNode<int>(1);
    treeNode<int> * s1 = new treeNode<int>(2);
    treeNode<int> * s2 = new treeNode<int>(3);

    root1->child.push_back(s1);
    root1->child.push_back(s2);

    print1(root1);

    cout<<endl<<endl;

    treeNode<int>* root2 = takeIn();

    print1(root2);
}

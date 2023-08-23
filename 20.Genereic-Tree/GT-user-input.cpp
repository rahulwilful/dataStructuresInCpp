 #include<bits/stdc++.h>

using namespace std;


template<typename T>
class Tnode{

public:
    T data;
    vector<Tnode<T>*> child;

    Tnode(T data)
    {
        this->data = data;
    }

};

Tnode<int> * takein()    ///function to take input for generic tree
{
    int data;                  //taking data
    cout<<"enter data"<<endl;
    cin>>data;

    Tnode<int> * root = new Tnode<int>(data);  //creating nodes with data

    int n;
    cout<<"enter number of childes for "<<data<<endl;  //taking number of childs
    cin>>n;

    for(int i=1;i<=n;i++)         ///loop to take input and creating childs
    {
        Tnode<int> * n1 = takein();  // creating child nodes
        root->child.push_back(n1);   //pushing child nodes into root and parent nodes
    }

    return root;
}

void print(Tnode<int> * root)
{
    cout<<root->data<<" : ";

    for(int i=0; i<root->child.size() ;i++)
    {
        cout<<root->child[i]->data<<", ";
    }
    cout<<endl;

    for(int i=0; i<root->child.size(); i++)
    {
        print(root->child[i]);
    }

}

int main()
{
    Tnode<int> * root = takein();

    print(root);
}

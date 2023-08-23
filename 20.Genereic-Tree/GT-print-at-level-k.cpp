#include<bits/stdc++.h>

using namespace std;

template<typename T>
class Tnode{

public:
    T data;
    vector<Tnode<int>*> child;

    Tnode(int data)
    {
        this->data = data;
    }
};

Tnode<int>* takeinlevel()
{
    int data;
    cout<<"enter data fro root node: ";
    cin>>data;

    Tnode<int> * root = new Tnode<int>(data);
    queue<Tnode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        Tnode<int>* f = q.front();
        q.pop();
        int n;
        cout<<"enter number of childs for "<<f->data<<": ";
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            cout<<"enter "<<i<<"th child for node "<<f->data<<" : ";
            cin>>data;
            Tnode<int> * n1 = new Tnode<int>(data);
            q.push(n1);
            f->child.push_back(n1);


        }

    }
        return root;
}

void printlevelwise(Tnode<int>* root)
{
    queue<Tnode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        Tnode<int>* f = q.front();
        cout<<f->data<<": ";
        q.pop();

        for(int i=0;i<f->child.size();i++)
        {
            cout<<f->child[i]->data<<", ";
            q.push(f->child[i]);
        }
        cout<<endl;
    }
}

void printatk(Tnode<int> * root,int k)
{
    if(root == NULL)
    {
        return;
    }

    if(k == 0)
    {
        cout<<root->data<<endl;
    }

    for(int i=0;i<root->child.size();i++)
    {
        printatk(root->child[i],k-1);
    }


}


int main()
{
    Tnode<int> * root = takeinlevel();
    printlevelwise(root);
    printatk(root,2);
}

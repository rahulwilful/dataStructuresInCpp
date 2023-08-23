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

Tnode<int> * takeinlevel()
{
    int data;
    cout<<"eneter root data: "<<endl;
    cin>>data;

    Tnode<int> * root = new Tnode<int>(data);

    queue<Tnode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        Tnode<int>* f = q.front();
        q.pop();
        int n;
        cout<<"enter number of child nodes for node: "<<f->data<<" : ";
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            cout<<"enter "<< i <<"th child for node: "<<f->data<<" : ";
            cin>>data;

            Tnode<int>* node = new Tnode<int>(data);
            q.push(node);
            f->child.push_back(node);
        }
    }

    return root;


}

int height(Tnode<int>* root)
{
    int mx=0;
    for(int i=0;i<root->child.size();i++)
    {
        int cheight = height(root->child[i]);

        if(cheight > mx)
        {
            mx = cheight;
        }
    }

    return mx+1;
}


void printlevelwise(Tnode<int> * root)
{
    if(root == NULL)
    {
        return ;
    }
    queue<Tnode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        Tnode<int>* f = q.front();
        q.pop();

        cout<<f->data<<": ";

        for(int i=0;i<f->child.size();i++)
        {
            cout<<f->child[i]->data<<", ";
            q.push(f->child[i]);

        }
        cout<<endl;
    }

    cout<<endl<<"height is "<<height(root)<<endl;
}

void deletetree(Tnode<int>* root)
{

    for(int i=0;i<root->child.size();i++)
    {
        deletetree(root->child[i]);
    }
     if(root == NULL)
    {
        return ;
    }
    cout<<"deleting root "<<root->data<<endl;


    delete root;
}


int main()
{
    Tnode<int>* root = takeinlevel();

    printlevelwise(root);
    cout<<"deleting nodes"<<endl;
    deletetree(root);

    printlevelwise(root);

}



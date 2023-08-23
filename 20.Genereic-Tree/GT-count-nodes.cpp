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
    cout<<"enter root data : "<<endl;
    cin>>data;
    Tnode<int> * root = new Tnode<int>(data);

    queue<Tnode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        Tnode<int> * f = q.front();
        q.pop();
        int n;
        cout<<"enter the number of child's for root: "<<f->data<<" : ";
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            cout<<"enter "<<i<<" th child of "<<f->data<<" : ";
            cin>>data;

            Tnode<int> * n1 = new Tnode<int>(data);

            q.push(n1);
            f->child.push_back(n1);

        }
    }

    return root;
}

void printlevelwise(Tnode<int> * root)      ///function to print levelwise
{
    int count = 0;
    queue<Tnode<int>*> q;   //creating node
    q.push(root);           //pushing node in Q


    while(!q.empty())        //loop to print level wise
    {
        Tnode<int> * f = q.front();   //storing front of Q in another node
        q.pop();                    //poping out the front of node
        cout<<f->data<<" : ";


        for(int i=0;i<f->child.size();i++)    //loop to print all the data from child vector of the  node
        {
            cout<<f->child[i]->data<<", ";

            q.push(f->child[i]);


        }
        cout<<endl;
    }




}

int count(Tnode<int> * root)
{
    if(root == NULL)
    {
        return 0;
    }
    int ans = 1;
    for(int i=0;i<root->child.size();i++)
    {
        ans += count(root->child[i]);
    }

    return ans;
}


int  main()
{
    Tnode<int> * root = takeinlevel();

    printlevelwise(root);

    cout<<"total nodes are : "<<count(root);

}



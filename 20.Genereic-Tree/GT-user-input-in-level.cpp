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

Tnode<int> * takeinlevel()             ///function to take input in level wise
{
    int data;                                          // taking data from user
    cout<<"enter root data : "<<endl;
    cin>>data;
    Tnode<int> * root = new Tnode<int>(data);             //creating node using data

    queue<Tnode<int>*> q;                              //creating Q and pushing node in Q
    q.push(root);

    while(!q.empty())                               //loop to to order nodes  in level wise
    {
        Tnode<int> * f = q.front();                    // storing front of q to another node
        q.pop();                                               //poping out the front of the node
        int n;
        cout<<"enter the number of child's for root: "<<f->data<<" : ";  // asking no of childes for font node
        cin>>n;

        for(int i=1;i<=n;i++)                                    //loop to take take childes for next level for perticular node
        {
            cout<<"enter "<<i<<" th child of "<<f->data<<" : ";    //taking  data for node
            cin>>data;

            Tnode<int> * n1 = new Tnode<int>(data);                 //creating child nodes with data

            q.push(n1);                                         //pushing child node in Q
            f->child.push_back(n1);                                    //pushing  child node in vector of parent node

        }
    }

    return root;      //returning root node
}

void print(Tnode<int> * root)
{
    cout<<root->data<<": ";

    for(int  i=0;i<root->child.size();i++)
    {
        cout<<root->child[i]->data<<", ";
    }

    cout<<endl;

    for(int i=0; i<root->child.size();i++)
    {
        print(root->child[i]);
    }
}

int  main()
{
    Tnode<int> * root = takeinlevel();

    print(root);
}

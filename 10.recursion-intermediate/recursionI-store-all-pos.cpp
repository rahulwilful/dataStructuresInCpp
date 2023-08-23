#include<bits/stdc++.h>

using namespace std;

void alli(int a[],int n,int x,int i,vector <int> &ans)
{
    if(i==n)
    {
         return ;
    }

    if(a[i]==x)
    {
        ans.push_back(i);
    }


    alli(a,n,x,i+1,ans);

}

int alli2(int a[],int n,int x,int i,int aa[],int j)
{
    if(i==n)
    {
         return 0 ;
    }

    if(a[i]==x)
    {
        aa[j]=i;
        return 1+alli2(a,n,x,i+1,aa,j+1);
    }


    return 0+alli2(a,n,x,i+1,aa,j);

}

int main()
{
    int a[]={1,2,2,2,5};
    vector <int> v;

    alli(a,5,2,0,v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    int aa[5];
    int count =alli2(a,5,2,0,aa,0);

    for(int i=0;i<count;i++)
    {
        cout<<aa[i]<<" ";
    }

}


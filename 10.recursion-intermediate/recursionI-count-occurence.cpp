#include<bits/stdc++.h>

using namespace std;

void alli(int a[],int n,int x,int i)
{

    if(n==-1)
    {
         return ;
    }

    if(a[n]==x)
    {
        i++;
    }
    if(n==0)
    {
        cout<<i;
    }

    alli(a,n-1,x,i);


}

int main()
{
    int a[]={1,2,2,2,5};

    alli(a,5,2,0);


}


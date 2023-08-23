#include<bits/stdc++.h>

using namespace std;

int count(int a[],int n,int x,int i)
{

    if(i==n)
    {
         return 0 ;
    }

    if(a[i]==x)
    {
        return 1+count(a,n,x,i+1);
    }
    else
    {
        return 0+count(a,n,x,i+1);
    }


}

int main()
{
    int a[]={1,2,2,2,5};

    cout<<count(a,5,2,0);


}



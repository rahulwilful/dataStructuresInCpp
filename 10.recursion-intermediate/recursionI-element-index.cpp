#include<bits/stdc++.h>

using namespace std;

int index(int a[],int n,int x,int i)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==x)
    {
        return i;
    }

    return index(a,n,x,i+1);
}



int main()
{
    int  a[]={1,2,3,2,5};

    cout<<index(a,5,9,0);
}

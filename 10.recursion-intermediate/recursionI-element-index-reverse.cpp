
#include<bits/stdc++.h>

using namespace std;

int index(int a[],int n,int x,int i)
{
    i=n;
    if(i==-1)
    {
        return -1;
    }
    if(a[i]==x)
    {
        return i;
    }


    return index(a,n-1,x,i);
}

int index2(int a[],int n,int x)
{
    if(n==-1)
    {
        return -1;
    }
    if(a[n]==x)
    {
        return n;
    }

    return index2(a,n-1,x);
}

int  index3(int a[],int n,int x,int i)
{
    if(i==n)
    {
        return -1;
    }

    int rem = index3(a,n,x,i+1);
    if(rem==-1)
    {
        if(a[i]==x)
        {
            return i;
        }
        else{
            return -1;
        }
    }
    else
    {
        return rem;
    }
}

int main()
{
    int  a[]={1,3,3,2,2};

    cout<<index(a,5,2,0);
    cout<<endl<<endl<<index2(a,5,2);
    cout<<endl<<endl<<index3(a,5,2,0);
}

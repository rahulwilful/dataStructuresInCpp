#include<bits/stdc++.h>

using namespace std;

void alli(int a[],int n,int x,int i)
{
    if(i==n)
    {
         return ;
    }

    if(a[i]==x)
    {
        cout<<i<<", ";
    }

    alli(a,n,x,i+1);

}

int main()
{
    int a[]={1,2,2,2,5};

    alli(a,5,2,0);


}

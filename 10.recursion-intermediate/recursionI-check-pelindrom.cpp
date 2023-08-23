#include<bits/stdc++.h>

using namespace std;

bool checkp(int a[],int  s,int e)
{
    if(s>e)
    {
        return true;
    }
    if(a[s]==a[e-1])
    {
        return checkp(a,s+1,e-1);
    }
    else
    {
        return false;
    }



}

int main()
{
    int a[]={1,2,3,3,2,1};

    if(checkp(a,0,6))
    {
        cout<<"its a plindrom";
    }
    else{
        cout<<"its not a pelindrom";
    }
}

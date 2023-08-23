#include<bits/stdc++.h>

using namespace std;

bool check(int a[],int n,int b)
{
    if(n==0)
    {
        return false;
    }

    if(a[0]==b)
    {
        return true;
    }
    return check(a+1,n-1,b);

}

bool check2(int a[],int n,int b)
{

    if(n==0)
    {
        return false;
    }

    bool rem = check2(a+1,n-1,b);

    if(rem)
    {
        return true;
    }
    if(a[0]==b)
    {
        return true;
    }
    else{
        return false;
    }
}




int main()
{
        int a[]={1,2,3,4,5};

        if(check2(a,5,4))
        {
            cout<<"present";
        }
        else
        {
            cout<<"absent";
        }
}

#include<bits/stdc++.h>

using namespace std;

int multiplication(int m,int n)
{
    if(n==0)
    {
        return 0;
    }

    int  small = multiplication(m,n-1);

    return small+m;
}

int main()
{
    cout<<multiplication(3,10);
}

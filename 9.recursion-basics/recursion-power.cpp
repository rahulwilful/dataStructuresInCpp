#include<bits/stdc++.h>

using namespace std;

int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int small = power(n,p-1);

    return n*small;
}

int main()
{
    cout<<power(5,3);
}

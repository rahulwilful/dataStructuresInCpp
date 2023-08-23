#include<bits/stdc++.h>

using namespace std;

int sum(int  n)
{
    if(n==0)
    {
        return 0;
    }

    int small = sum(n/10);

    int lastd = n%10;
    return small+lastd;
}

int main()
{
    cout<<sum(222288);

}




#include<bits/stdc++.h>

using namespace std;

int count(int  n)
{
    if(n==0)
    {
        return 0;
    }

    int small = count(n/10);

    return small+1;
}

int main()
{
    cout<<count(1234567);

}



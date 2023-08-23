#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
    cout<<n<<endl;
    if(n == 0)
    {
        return 1;
    }
    int small = fact(n-1);

    return n*small;
}

int main()
{
    int n = 10000;

    int asn = fact(n);

    cout<<asn;
}

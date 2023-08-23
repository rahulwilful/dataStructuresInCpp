#include<bits/stdc++.h>

using namespace std;

double gsum(int k)
{
    if(k==0)
    {
        return 1;
    }

    double small = gsum(k-1);

    return small + 1.0/pow(2,k);
}

int main()
{
    cout<<gsum(3);
}

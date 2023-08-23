
#include<bits/stdc++.h>

using namespace std;

int count(int n)
{

    if(n==0)
    {
        return 0;
    }
    int small = count(n/10);

    int lastd = n%10;

    if(lastd==0)
    {
        return ++small;
    }
    else
    {
        return small;
    }




}

int main()
{
   cout<<"zeros are : "<<count(2002);

}


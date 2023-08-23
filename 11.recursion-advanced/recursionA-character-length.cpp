#include<bits/stdc++.h>

using namespace std;

int count(char a[])
{

    if(a[0] =='\0')
    {
         return 0;
    }


    return 1+count(a+1);
}



int main()
{
    char a[]="abc";


    cout<<count(a)<<endl;



}




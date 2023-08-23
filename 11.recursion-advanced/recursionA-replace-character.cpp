#include<bits/stdc++.h>

using namespace std;

char replace(char a[])
{

    if(a[0] =='\0')
    {
         return 0;
    }

    if(a[0]=='a')
    {
        a[0]='x';
    }

    return replace(a+1);
}



int main()
{
    char a[]="abca";


    replace(a);

    for(int i=0;i<strlen(a);i++)
    {
        cout<<a[i];
    }

}





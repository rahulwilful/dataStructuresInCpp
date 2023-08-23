
#include<bits/stdc++.h>

using namespace std;

char replace(char a[])
{

    if(a[0] =='\0')
    {
         return 0;
    }

    if(a[0]!='a')
    {
      replace(a+1);
    }
    else
    {
        for(int  i=0;a[i]!='\0';i++)
        {
            a[i]=a[i+1];
        }
        replace(a);
    }

    return replace(a+1);
}



int main()
{
    char a[]="abca";


    replace(a);

    for(int i=0;i<4;i++)
    {
        cout<<a[i];
    }

}





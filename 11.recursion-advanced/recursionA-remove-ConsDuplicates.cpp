#include<bits/stdc++.h>

using namespace std;

void remove(char a[])
{

    if(a[0] =='\0')
    {
        return ;
    }

    if(a[0]!=a[1])
    {
        remove(a+1);
    }
    else{
        for(int i=0;a[i]!='\0';i++)
        {
            a[i]=a[i+1];
        }
        remove(a);
    }
}

int main()
{
    char a[]="aabbccaa";


    remove(a);

    for(int i=0;i<strlen(a);i++)
    {
        cout<<a[i];
    }

}

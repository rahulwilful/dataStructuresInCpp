#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[111],b[111];

    cout<<"enter string 1: ";
    cin>>a;
    cout<<endl<<"enter string 2: ";
    cin>>b;

    if(strcmp(a,b) == 0)           ///comparing strings with inbuilt keyword
    {
        cout<<endl<<"string is valid";
    }
    else
    {
        cout<<endl<<"string is invalid";
    }
}

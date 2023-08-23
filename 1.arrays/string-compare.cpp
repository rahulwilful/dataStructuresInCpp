#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char st1[100],st2[100];

    cout<<"enter string 1: ";
    cin.getline(st1,100);
    cout<<endl<<"enter string 2: ";
    cin.getline(st2,100);

    if(strcmp(st1,st2) == 0)
    {
        cout<<endl<<"strings are equal";
    }
    else
    {
        cout<<endl<<"strings are not equal";
    }
}

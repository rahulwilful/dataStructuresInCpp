#include<iostream>
using namespace std;

int main()
{
    char a[100];
    cout<<"enter characters : ";
    cin>>a;

    cout<<endl<<a;

    int count=0;

    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    cout<<endl<<"the count of charatcr is: "<<count;
}

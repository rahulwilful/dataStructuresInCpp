#include<iostream>

using namespace std;

int main()
{
    char a[1000];

    cout<<"enter ur name : ";
    cin.getline(a,1000);

    cout<<endl<<a;

    int c=0;

    for(int i=0;a[i]!='\0';i++)
    {
        c++;
    }
    cout<<endl<<"name length is "<<c;
}

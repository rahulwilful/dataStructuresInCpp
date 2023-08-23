#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[100];

    cout<<"enter characters : ";
    cin.getline(a,100);

    int len = strlen(a);

    cout<<endl<<len;
}

#include<iostream>
#include<cstring>
using namespace std;

void prifix(char str[])
{
     for(int i=0;str[i] != '\0';i++)
    {
        for(int j=0 ;j<=i;j++)
        {
            cout<<str[j];
        }
        cout<<endl;
    }

}

void suffix(char str []){

    int n = strlen(str);

    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=i;j--)
        {
            cout<<str[j];
        }
        cout<<endl;
    }

}

int main()
{
    char st1[10000],st2[10000];

    cout<<"enter string 1: "<<endl;
    cin.getline(st1,10000);


    for(int i=0;i<=strlen(st1)-1;i++)
    {
        st2[i]=st1[i];
        cout<<st2<<endl;
    }
     //second method
     cout<<endl<<endl<<"second method "<<endl;
    prifix(st1);

         cout<<endl<<endl<<"suffixes "<<endl;
         suffix(st1);


}

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char st1[100],st2[100],st3[100];

    cout<<"enter string 1: ";
    cin.getline(st1,100);
    cout<<endl<<"enter string 2: ";
    cin.getline(st2,100);
    cout<<endl<<"enter string 3: ";
    cin.getline(st3,100);

    cout<<"after copying "<<endl;

    strcpy(st1,st2);

    cout<<"string 1 "<<st1<<endl;
    cout<<"string 2 "<<st2<<endl;


      // strncpy
    strncpy(st2,st3,2);

    cout<<endl<<"string 2 "<<st2<<endl;
    cout<<"string 3 "<<st3;

}

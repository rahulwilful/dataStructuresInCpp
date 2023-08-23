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

    cout<<"after concatinating "<<endl;

    strcat(st1,st2);

    cout<<"string 1 "<<st1<<endl;
    cout<<"string 2 "<<st2<<endl;

    //manually concatinating
    int n = strlen(st2);

    for(int i=0;i<=strlen(st3);i++)
    {
        st2[i+n]=st3[i];
    }
    cout<<endl<<endl<<"string 2 is "<<st2;


}

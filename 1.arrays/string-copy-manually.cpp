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

    for(int i=0; i <= strlen(st1); i++){
        st1[i]=st2[i];

    }
    cout<<endl<<"string 1 is "<<st1;
}



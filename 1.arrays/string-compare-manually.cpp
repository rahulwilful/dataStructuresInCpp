#include<iostream>
#include<cstring>
using namespace std;

bool compare(char str1[], char str2[])
{
    if(strlen(str1) != strlen(str2)) return false;

    for(int i=0; i < strlen(str1); i++){
        if(str1[i] != str2[i])
            return false;
    }

    /*for(int i=0; str1[i] = '\0'; i++){
        if(str1[i] != str2[i])
            return false;
    }*/
    return true;
}

int main()
{
    char st1[100],st2[100];

    cout<<"enter string 1: ";
    cin.getline(st1,100);
    cout<<endl<<"enter string 2: ";
    cin.getline(st2,100);

    if(compare(st1,st2))
    {
        cout<<endl<<"strings are equal";
    }
    else
    {
        cout<<endl<<"strings are not equal";
    }
}


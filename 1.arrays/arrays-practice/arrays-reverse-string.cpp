#include<iostream>
#include<cstring>

using namespace std;

void reverse(char b[]){
    int s=0;
    int e=strlen(b)-1;

    while(s<e)
    {
        swap(b[s],b[e]);
        s++;
        e--;
    }

}

int main()
{
    char a[100];

    cout<<"enter string : ";
    cin.getline(a,100);

    reverse(a);
    cout<<endl<<"reversed string is: "<<a;


}

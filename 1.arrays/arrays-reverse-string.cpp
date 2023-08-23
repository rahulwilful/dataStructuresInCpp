#include<iostream>
#include<cstring>

using namespace std;



void reverse(char in[])
{
    int s=0;
    int e = strlen(in)-1;
     while(s<e)
    {
        swap(in[s],in[e]);
        s++;
        e--;
    }
}


int main()
{



    char a[100];
    cout<<"enter ur name : ";
    cin.getline(a,100);

    cout<<endl<<a;
    reverse(a);
    cout<<endl<<"reversed string is "<<a;








}


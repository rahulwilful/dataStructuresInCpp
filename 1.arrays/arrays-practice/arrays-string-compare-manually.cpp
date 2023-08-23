#include<iostream>
#include<cstring>

using namespace std;

bool compare(char a[],char b[])
{
    if(strlen(a) != strlen(b))
    {
        cout<<endl<<"invalid strings";
        return false;
    }
    int flag = 0;
    for(int i=0;i<=strlen(a);i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }

    }


    return true;
}
int main()
{
    char a[111],b[111];

    cout<<"enter string 1 ";
    cin>>a;
    cout<<endl<<"enter string 2: ";
    cin>>b;

    if(compare(a,b))
    {
        cout<<endl<<"valid strings";
    }
    else
    {
        cout<<endl<<"invalide strings";
    }

}

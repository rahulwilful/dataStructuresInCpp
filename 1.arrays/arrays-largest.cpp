#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"enter size "<<endl;
    cin>>n;

    int a[n];

    cout<<endl<<"enter arrays "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"arrays are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    int b=0;
    for(int i=0;i<n;i++)
    {

        if(a[i]>b)
        {
            b=a[i];
        }
    }
    cout<<endl<<"largest is "<<b;

    int c=a[0];
    for(int i=0;i<n;i++)
    {

        if(a[i]<c)
        {
            c=a[i];
        }
    }
    cout<<endl<<"smallest is "<<c;
}

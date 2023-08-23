#include<iostream>

using namespace std;

int main()
{
    int a[99],n,s,e;

    cout<<"enter the size of array: ";
    cin>>n;
    cout<<endl<<"enter the arrays: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    s=0;
    e=n-1;

    while(s<=e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }

    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

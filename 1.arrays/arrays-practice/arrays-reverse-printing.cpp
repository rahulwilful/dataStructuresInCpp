#include<iostream>

using namespace std;

int main()
{
    int a[5],n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<endl<<"enter arrays : "<<endl;


    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;

    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }

}

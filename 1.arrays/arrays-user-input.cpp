#include<iostream>

using namespace std;

int main()
{
    int a[99],n;

    cout<<"enter size"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
        cout<<sum<<" ";
    }
    cout<<endl<<"sum is "<<sum;
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int a[100][100],n,m,r,c,v;

    cout<<"enter the numbers of rows: ";
    cin>>n;
    cout<<endl<<"enter the number of columns: ";
    cin>>m;

    for(int i=0;i<n;i++)
    {
        cout<<"enter arrays for row "<<i<<": ";
        for(int j=0;j<m;j++)
        {

            cin>>a[i][j];
            cout<<endl;
        }

    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            cout<<a[i][j]<<" ";

        }
        cout<<endl;

    }

    cout<<"enter the positions where u want to replace the array"<<endl<<"enter row: ";
    cin>>r;
    cout<<endl<<"enter column: ";
    cin>>c;

    cout<<endl<<"enter value: ";
    cin>>v;

    a[r][c]=v;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            cout<<a[i][j]<<" ";

        }
        cout<<endl;

    }



}

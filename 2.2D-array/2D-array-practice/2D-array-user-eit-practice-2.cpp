#include<iostream>

using namespace std;

int main()
{
    int a[100][100],r,c;

    cout<<"enter the rows: ";
    cin>>r;
    cout<<endl<<"enter the columns: ";
    cin>>c;
    cout<<endl<<"enter the arrays: ";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int rr,cc,n;

    cout<<"enter the row to change number: ";
    cin>>rr;
    cout<<endl<<"enter the column to change number: ";
    cin>>cc;
    cout<<endl<<"enter the number to change: ";
    cin>>n;

    a[rr][cc] = n;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}

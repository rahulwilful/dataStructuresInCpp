#include<iostream>

using namespace std;

int main()
{
    int a[100][100],r,c,i,j;

    cout<<"enter number of rows: ";
    cin>>r;
    cout<<endl<<"enter number of columns: ";
    cin>>c;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"enter the number for "<<a[i][j]<<" term: ";
            cin>>a[i][j];
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int rr,cc,aa;
    cout<<endl<<"enter row to change number: ";
    cin>>rr;
    cout<<endl<<"enter column to change number: ";
    cin>>cc;

    cout<<endl<<"enter number to change: ";
    cin>>aa;

    a[rr][cc] = aa;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

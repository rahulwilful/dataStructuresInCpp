#include<iostream>

using namespace std;

int main()
{
    int a[100][100],n,m,i,j;

    cout<<"enter the numbers of rows: ";
    cin>>n;
    cout<<endl<<"enter the number of columns: ";
    cin>>m;

    // accepting arsays
    for( i=0;i<n;i++)
    {
        cout<<"enter arrays for row "<<i<<": ";
        for( j=0;j<m;j++)
        {
            cin>>a[i][j];
            cout<<endl;
        }
    }
    //displaying arrays row wise
    for( i=0;i<n;i++)
    {
        for( j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // dispalying arrays columnwise
    cout<<endl<<endl;
    for( i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;

    }

    int b[10][10]={{0}};
    for( i=0;i<10;i++)
    {
        for( j=0;j<10;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;

    }

}

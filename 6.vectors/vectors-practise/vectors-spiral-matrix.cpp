#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int m=4,n=4;
    vector<vector<int>> v(m,vector<int>(n));
    v[0][0]=11;
    v[0][1]=22;
    v[0][2]=33;
    v[0][3]=44;
    v[1][0]=55;
    v[1][1]=66;
    v[1][2]=77;
    v[1][3]=88;
    v[2][0]=99;
    v[2][1]=12;
    v[2][2]=23;
    v[2][3]=34;
    v[3][0]=45;
    v[3][1]=56;
    v[3][2]=67;
    v[3][3]=78;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> ans(m,vector<int>(n));
    int sr=0,er=m-1,sc=0,ec=n-1,count=0;
    while(sr<=er && sc<=ec)
    {
        //1st
        for(int i=sc;i<=ec;i++)
        {
              ans[sr][i]=v[sr][i];
              count++;
        }
        sr++;
        if(count==m*n)
        {
            break;
        }

        //2nd
        for(int i=sr;i<=er;i++)
        {
              ans[i][ec]=v[i][ec];
              count++;
        }
        ec--;
        if(count==m*n)
        {
            break;
        }

        //3rd
        for(int i=ec;i>=sc;i--)
        {
              ans[er][i]=v[er][i];
              count++;
        }
        er--;
        if(count==m*n)
        {
            break;
        }

        //4th
        for(int i=er;i>=sr;i--)
        {
              ans[i][sc]=v[i][sc];
              count++;
        }
        sc++;
        if(count==m*n)
        {
            break;
        }

    }

    cout<<endl<<"printing in spiral matrix form : "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<ans[i][j]<<" ";
        }

    }
}

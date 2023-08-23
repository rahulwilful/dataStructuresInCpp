#include<bits/stdc++.h> ///master header file ,this file includes all the header files we dont need to include individual files

using  namespace std;

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    sort(a,a+5); ///inbuilt sorting function

   for(int i=0;i<5;i++)
   {
       cout<<a[i];
   }
}



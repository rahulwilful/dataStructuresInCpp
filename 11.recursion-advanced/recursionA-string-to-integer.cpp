#include<bits/stdc++.h>

using namespace std;

int tostring(char str[], int n)
{

    if(n ==0)
    {
         return 0;
    }

    int small = tostring(str,n-1);
    int last = str[n-1] - '0';
    int ans = small*10 + last;
    return ans;
}



int main()
{
    char str[]="12345";
    int a = tostring(str,5);



        cout<<a<<endl;


}






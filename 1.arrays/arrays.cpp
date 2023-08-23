#include<iostream>
using namespace std;

int main()
{
    int a[11000] ;

    for (int i;i<11000;i++)
    {
        cout<<sizeof(a[i])<<" "<<endl;
    }

    return (0);
}

#include<bits/stdc++.h>

using namespace std;
int linearsearch(int a[], int n ,int key)
{
    int i;
    for(i =0 ;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
            break;
        }


    }

    return -1;
}

int main()
{
    int n=6;
    int a[n];

    cout<<"enter arrays : ";
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;

    cout<<"enter the key u want to find : ";
    cin>>key;

    int pos = linearsearch(a,n,key);



    if(pos == -1)
    {
        cout<<"invalid key";
    }
    else
    {
        cout<<"key "<<key<<" found at position "<<pos+1;
    }
}

#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1;i++)
    {
        int small = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[small])
            {
                small = j;
            }
        }
        if(arr[i]>arr[small])
        {
            swap(arr[i],arr[small]);
        }
    }
}

int main()
{
    int arr[6];

    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }

    selectionSort(arr,6);

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}

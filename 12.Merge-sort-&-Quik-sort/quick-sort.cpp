#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int s,int e)
{
    int i=s;
    int p = a[e];
    for(int j=s;j<=e-1;j++)
    {
        if(a[j]<a[e])
        {
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[e]);
    for(int j=0;j<7;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return i;
}

void quickSort(int a[] ,int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int  p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int partition2(int arr[],int s,int e)
{


    int i = s;
    int p = arr[e];
    for(int j=s;j<=e-1;j++)
    {
        if(arr[j]<arr[e])
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[e]);

    for(int j=0;j<7;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;


    return i;

}

void quickSort2(int arr[],int s,int e)
{
    if(s>=e) return;
    int p = partition2(arr,s,e);

    quickSort2(arr,s,p-1);
    quickSort2(arr,p+1,e);

}

/*
int Part(int a[],int s,int e)
{
    int i=s;

    for(int j=s;j<=e-1;j++)
    {
        if(a[j]<a[e])
        {
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[e]);
    for(int j=0;j<7;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return i;
}

void quickSort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }

    int  p = Part(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}
*/

int main()
{
    int a[]={1,5,2,10,7,3,80};
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    quickSort2(a,0,6);

    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
 return 0;
}


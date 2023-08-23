#include<bits/stdc++.h>

using namespace std;

void bubblesort(int a[],int n) ///sorting the arrays
{
    for(int count=0;count<n;count++)
    {
        for(int i=0;i<n-1;i++)
        {
            int flag=0;

            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                flag=1;
            }
            if(flag=0)
            {
                break;
            }
        }
    }
}

int binerysearch(int a[], int n, int key) ///searching the key using binary search
{
    int s=0,e=n-1,mid;
    while(s<e)
    {
        mid = s + (e-s)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;

}

int binerySearch2(int arr[],int n,int x)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid = s+(e-s)/2;

        if(arr[mid] == x)
        {
            return mid;
        }
        else if(x<arr[mid])
        {
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{


    int n=7;
    int a[n];

    cout<<"enter arrays : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"after sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int key;
    cout<<endl<<"enter the key to search: ";
    cin>>key;

    int pos=binerySearch2(a,n,key);
    cout<<"searching key"<<endl;

    if(pos==-1)
    {
        cout<<"invalid key";
    }
    else{
        cout<<"key found at position "<<pos+1;
    }


}

#include<iostream>

using namespace std;





void bubbleSort(int a[], int n){            ///function to sort the arrays in bubble sort method.

cout<<endl<<"sorting arrays........";
    for(int countt=1; countt<n; countt++)   ///for loop to count the iteration that is less then 'n' times or n-1 times.
    {
        int flag = 0;
        for(int i=0; i<n-1; i++)            ///for loop to move towards next array .
        {
            if(a[i]>a[i+1])                 ///checking if current  array is greater then next arrray.
            {
                swap(a[i],a[i+1]);          ///swapping current arrray with next array.
                flag = 1;
            }
        }
        if(flag == 0)
        {
            cout<<endl<<"array is sorted"<<endl;
            break;
        }
    }


}


int main()
{
    int n;
    cout<<"enter the size: ";
    cin>>n;

    int a[n];

    cout<<"enter the arrays: ";
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl<<"the arrays are : ";
    for(int  i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    bubbleSort(a,n);   ///calling of sorting function.

  /*  cout<<endl<<"sorting arrays........";
    for(int countt=1; countt<n; countt++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
            }
        }
    } */
    cout<<endl<<"the sorted arrays are : ";
    for(int  i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}

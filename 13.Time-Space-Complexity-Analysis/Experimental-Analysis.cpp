#include<bits/stdc++.h>

using namespace std;

///SELECTIONSORT Function

void SelectionSort(int a[],int  n)           ///function to sort the arrays in selection sort method.

{
     for(int i=0; i<n-1; i++)        ///outer for loop to to move at 2nd last position of arrays.
    {
        int small = i;               ///taking temporary variable small and initialising it to i that is 0th position
        for(int j=i+1;j<n;j++)       ///inner for loop to move at last position of arrays
        {
            if(a[j] < a[small])     ///finding smallest element at RHS in array
            {
               small= j;            /// saving smallest element in small
            }
        }


            swap(a[i],a[small]);  ///swapping smallest element of RHS with LHS of array

    }




}


///MERGESORT Function

void mergeArray(int x[],int y[],int a[],int s,int e)
{
    int mid=(s+e)/2;
  int i=s;
  int j=mid+1;
  int k=s;
  while(s<=mid && j<=e)
  {
      if(x[i]<a[j])
      {
          a[k]=x[i];
          i++;
          k++;
      }
      else
      {
          a[k]=y[j];
          j++;
          k++;
      }


  }

  while(i<=mid)
  {
      a[k]=x[i];
      k++;
      i++;
  }

  while(j<=e)
  {
      a[k]=y[j];
      k++;
      j++;
  }




}
int *x = new int[10000000];
int *y = new int[10000000];
void MergeSort(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }



    int mid = (s+e)/2;
     for(int i=s;i<=mid;i++)
     {
         x[i]=a[i];
     }
     for(int i=mid+1;i<=e;i++)
     {
         y[i]=a[i];
     }
     MergeSort(x,s,mid);
     MergeSort(y,mid+1,e);
     mergeArray(x,y,a,s,e);

}



int main()
{
    for(int n=10;n<=10000000;n*=10)
    {
        int *arr = new int[n];

        for(int i = 0; i<n ; i++)
        {
            arr[i]=n-i;
        }

        auto start = chrono::high_resolution_clock::now(); ///code to start timer

        MergeSort(arr,0,n-1);
        ///SelectionSort(arr,n);


        auto end = chrono::high_resolution_clock::now(); ///code to end timer
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start).count();

       cout << "MergeSort n= "<<n<<" Time= "<< duration << endl;
        ///cout << "SelectionSort n= "<<n<<" Time= "<< duration << endl;
        delete []arr;
    }
}

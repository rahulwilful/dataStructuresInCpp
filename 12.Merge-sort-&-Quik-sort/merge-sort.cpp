#include<bits/stdc++.h>

using namespace std;

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

void sortArray(int a[],int s,int e)
{
    if(s>=e)
    {
        return;
    }


    int x[100],y[100];
    int mid = (s+e)/2;
     for(int i=s;i<=mid;i++)
     {
         x[i]=a[i];
     }
     for(int i=mid+1;i<=e;i++)
     {
         y[i]=a[i];
     }
     sortArray(x,s,mid);
     sortArray(y,mid+1,e);
     mergeArray(x,y,a,s,e);

}

void mergeArray2(int arr[],int x[],int y[],int s,int e)
{
    int mid= (s+e)/2;
    int  i = s,j=mid+1,k=s;
    while(i<=mid && j<=e)
    {
        if(x[i]<y[j])
        {
            arr[k]=x[i];
            i++;
            k++;
        }
        else{
            arr[k]=y[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        arr[k]=x[i];
        k++;
        i++;
    }

    while(j<e)
    {
        arr[k]=y[j];
        k++;
        j++;
    }

}

void sortArray2(int arr[],int s,int e)
{
    if(s>=e) return;

    int mid = (s+e)/2;

    int x[100],y[100];

    for(int i=0; i<=mid;i++)
    {
        x[i] = arr[i];
    }
     for(int i=mid+1; i<=e;i++)
    {
        y[i] = arr[i];
    }

    sortArray2(x,s,mid);
    sortArray2(y,mid+1,e);

    mergeArray2(arr,x,y,s,e);
}
int main()
{
    int a[]={7,6,5,8,4,3,5};


    sortArray2(a,0,6);

    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }

}



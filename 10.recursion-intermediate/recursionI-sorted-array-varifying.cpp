 #include<bits/stdc++.h>

using namespace std;

bool check(int a[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }

    bool var = check(a+1,n-1);

    return var;
}


bool check2 (int a[],int n)
{


    bool var = check(a+1,n-1);

    if(a[0]>a[1])
    {
        return false;
    }



    return var;
}

bool check3(int a[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(a[n-2]>a[n-1])
    {
        return false;
    }

    bool var = check(a,n-1);

    return var;
}



int main()
{
  int a[]={1,2,3,7,5};


  /*if(check2(a,5)== true)
  {
      cout<<"sorted";
  }
  else
  {
      cout<<"unsorted";
  }*/

   if(check3(a,5)== true)
  {
      cout<<"sorted";
  }
  else
  {
      cout<<"unsorted";
  }




}

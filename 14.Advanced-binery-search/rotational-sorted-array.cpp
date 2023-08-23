#include<bits/stdc++.h>

using namespace std;

int search(vector<int>& v,int key)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(v[mid]==key)
        {
            return mid;
        }

        if(v[mid]>=v[s])
        {
            if(key<=v[mid] && key>=v[s])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{
            if(key<=v[e] && key>=v[mid])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    int n = search(v,4);

    if(n==-1)
    {
        cout<<"element not present";
    }
    else{
        cout<<"element present at index "<< n;
    }


}

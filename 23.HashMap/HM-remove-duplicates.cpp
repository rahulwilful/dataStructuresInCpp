#include<bits/stdc++.h>

using namespace std;

vector<int> removeDuplicates(int arr[],int n)
{
    vector<int> out;
    unordered_map<int , bool> mymap;
    for(int i=0;i<n;i++)
    {
        if(mymap.count(arr[i]) == 0)
        {
            out.push_back(arr[i]);
            mymap[arr[i]] = true;
        }
    }

    return out;
}

int main()
{
    int arr[] = {1,5,2,4,4,3,3,6,7,1,1,2};
    vector<int> in = removeDuplicates(arr,12);

    for(int i=0;i<in.size();i++)
    {
        cout<<in[i]<<", ";
    }
}

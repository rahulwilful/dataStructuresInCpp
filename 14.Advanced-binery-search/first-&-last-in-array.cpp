#include<bits/stdc++.h>

using namespace std;

/*int getf(vector<int>& v, int tgt)
{
    int s,e;
    s=0;
    e=v.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(v[mid]==tgt)
        {
            ans=mid;
            e=mid-1;
            ///return mid;   //here its normal version of binnery search
        }
        else if(v[mid]<tgt)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }

    return ans;
}*/

int getindex(vector<int>& v, int tgt, bool flag)
{
    int s=0,e;
    e=v.size()-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;

        if(v[mid]==tgt)
        {
            ans=mid;
            if(flag)
            {
               e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        else if(v[mid]<tgt)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

vector<int> search(vector<int> &v, int tgt)
{
    vector<int> vv(2,-1);
    int first = getindex(v,tgt,true);
    vv[0]=first;
    if(first==-1)
    {
        return vv;
    }
    int last = getindex(v,tgt,false);

    vv[0]=first;
    vv[1]=last;

    return vv;
}

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(6);
    v.push_back(6);
    vector<int> vv;
    vv=search(v,6);

    if(vv[0]==-1 || vv[1]==-1)
    {
        cout<<endl<<"element not present";
    }
    else{
        cout<<endl<<"1st place is "<<vv[0]<<" last place is "<<vv[1];
    }


}

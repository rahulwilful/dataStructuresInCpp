#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> mymap;
    mymap["abc "] = 1;
    mymap["abc2"] = 2;
    mymap["abc3"] = 3;
    mymap["abc4"] = 4;
    mymap["abc5"] = 5;

    for(unordered_map<string, int>::iterator it=mymap.begin(); it!=mymap.end();it++)
    {
        cout<<"key :"<<it->first<<" value :"<<it->second<<endl;
    }
    cout<<endl;

    map<string ,int> mymap2;
    mymap2["abc "] = 1;
    mymap2["abc2"] = 2;
    mymap2["abc3"] = 3;
    mymap2["abc4"] = 4;
    mymap2["abc5"] = 5;

    for(map<string ,int>::iterator it=mymap2.begin(); it!=mymap2.end(); it++)
    {
        cout<<"key :"<<it->first<<" value :"<<it->second<<endl;
    }

}

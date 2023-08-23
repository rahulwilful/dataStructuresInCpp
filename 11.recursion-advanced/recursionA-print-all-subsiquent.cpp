#include<bits/stdc++.h>

using namespace std;

void subsequent(string in,string out,vector<string> &v)
{
    if(in.length()==0)
    {
        v.push_back(out);
        return;
    }
    subsequent(in.substr(1),out+in[0],v);
    subsequent(in.substr(1),out,v);

}

int main()
{
    vector<string> v;
    string in;
    cin>>in;
    string out=" ";
    subsequent(in,out,v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}


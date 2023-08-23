#include<bits/stdc++.h>

using namespace std;

string validate(string a)
{
    stack<char> s;

    for(int i=0;i<a.size();i++)
    {
        if(s.empty() || a[i] != s.top())
        {
            s.push(a[i]);
        }
        else{
            s.pop();
        }
    }
    string ans="";
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());

    return ans;



}

int main()
{
    string a;
    char b;
    for(int i=0;i<6;i++)
    {
        cin>>b;
        a.push_back(b);
    }

    string ans = validate(a);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}

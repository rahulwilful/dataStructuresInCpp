#include<bits/stdc++.h>

using namespace std;

 int evaluate(vector<string>& a)
{
    stack<char> s;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]=="+" || a[i]=="-" || a[i]=="*" || a[i]=="/")
        {
            int v1 = s.top();
            s.pop();
            int v2 = s.top();
            s.pop();

            if(a[i]=="+")
            {
                s.push(v1+v2);
            }
            if(a[i]=="-")
            {
                s.push(v1-v2);
            }
            if(a[i]=="*")
            {
                s.push(v1*v2);
            }
            if(a[i]=="/")
            {
                s.push(v1/v2);
            }
        }
        else{
            s.push(atoi(a[i].c_str()));
        }
    }


    return s.top();

}

int main()
{
    vector<string> a;

    string b;
    for(int i=0;i<5;i++)
    {
        cin>>b;
        a.push_back(b);

    }

    for(int i=0;i<5;i++)
    {

        cout<<a[i]<<endl;

    }

    int c = evaluate(a);

    cout<<endl<<c;




}


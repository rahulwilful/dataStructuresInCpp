#include<bits/stdc++.h>

using namespace std;

bool validate(string a)
{
    if(a.size() == 0) return false;

    stack<char> s;
    for(int i=0; i<a.size();i++)
    {
        if(a[i]=='{' || a[i]=='(' || a[i]=='[')
        {
            s.push(a[i]);
        }
        else{

            if(s.empty()) return false;   ///its IMP otherwise u will get runtime error

            if(a[i]=='}' )
            {
               if(s.top() == '{')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }


            if(a[i]==')' )
            {
                if(s.top()=='(')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }


            if(a[i]==']')
            {
                if(s.top()=='[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }

    }

    if(s.empty())
    {
        return true;
    }

    return false;
}

int main()
{
    string a;

    cin>>a;


    cout<<a<<endl;

    if(validate(a))
    {
        cout<<"string is balanced "<<endl;
    }
    else{
        cout<<"its not balanced"<<endl;
    }


}

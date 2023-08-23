#include<bits/stdc++.h>

using namespace std;


int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
   cout<<s1.size()<<endl;
   cout<<s1.empty()<<endl;

    cout<<endl<<endl;
    stack<int> s2;
    int i;
    for( i=0;i<8;i++)
    {
        s2.push(i);
    }

    for( i=0;i<8;i++)
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }

    cout<<s2.size()<<endl;
    cout<<s2.empty()<<endl;
}


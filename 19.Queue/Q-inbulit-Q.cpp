#include<bits/stdc++.h>

using namespace std;



int main()
{
    queue<int> q;
    cout<<q.size()<<endl<<endl;
    cout<<q.empty()<<endl<<endl;
    q.push(10);
    q.push(12);
    q.push(14);
    q.push(13);
    q.push(15);
    q.push(10);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(33);
    q.push(44);

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
        cout<<"size : "<<q.size()<<endl;
    }
}

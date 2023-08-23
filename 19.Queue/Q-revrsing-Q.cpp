#include<bits/stdc++.h>

using namespace std;

void reverse(queue<int> &q)
{
    stack<int> s;    //creating stack to push all the elements from queue

    while(!q.empty()) //function to push all the element in stack
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}

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
    q.push(100);


    q.push(33);
    q.push(44);
    cout<<q.front()<<endl<<endl;

    reverse(q);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

}


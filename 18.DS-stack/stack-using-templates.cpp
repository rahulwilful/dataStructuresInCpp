#include<bits/stdc++.h>

using namespace std;

template<typename T>

class sstack{
    T *arr;
    int next;
    T capacity;

public:
    sstack()
    {
        capacity = 4;
        next = 0;
        arr = new T(capacity);
    }

    sstack(T cap)
    {
        capacity = cap;
        arr = new T(capacity);
        next = 0;
    }

    bool IsEmpty()
    {
        return next == 0;
    }

    T size()
    {
        return next;
    }

    void push( T data)
    {
        if(next == capacity)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        arr[next]=data;
        next++;
    }
    void pop()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        next--;
    }

    T top()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty"<<endl;
            return 0;
        }

        return arr[next-1];
    }


};

template<typename T>

class stack1{
    T * arr;
    int capacity;
    int nextI;

public:

    stack1()
    {
        capacity = 4;
       arr=new T[capacity];
        nextI = 0;
    }

    stack1(T cap)
    {
        capacity = cap;
        arr = new T[capacity];
        nextI = 0;
    }

    bool isEmpty()
    {
        return nextI == 0;
    }

    int size()
    {
        return nextI;
    }
    void push(T data)
    {
        if(size() == capacity)
        {
            cout<<" stack is full"<<endl;
            return;
        }
        arr[nextI] = data;
        nextI++;
    }

    void pop()
    {
       if(isEmpty())
        {
            cout<<" stack is empty"<<endl;
            return;
        }

        nextI--;
    }

    T top()
    {
        if(isEmpty())
        {
            cout<<" stack is empty"<<endl;
            return 0;
        }

        return arr[nextI - 1];
    }
};



int main()
{
    stack1<char> s1(4);
    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);

    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
    s1.pop();

    cout<<endl<<endl;

    cout<<endl<<endl;
    stack1<double> s2(8);
    for(int i=0;i<8;i++)
    {
        s2.push(i);
    }

    for(int i=0;i<8;i++)
    {
        cout<<s2.top()<<endl;
        s2.pop();
    }

    cout<<s2.size()<<endl;

}

#include<bits/stdc++.h>

using namespace std;

class sstack{

    int *arr;
    int next;
    int capacity;

public:

    sstack()
    {
        capacity = 4;
        arr = new int(capacity);
        next = 0;
    }

    sstack(int cap)
    {
        capacity = cap;
        arr = new int(capacity);
        next = 0;
    }
    //1
    bool IsEmpty()
    {
        return next == 0;
    }
    //2
    int top()
    {
        if(IsEmpty())
        {
            cout<<"stack is empty "<<endl;
            return -1;
        }
        return arr[next-1];
    }
    //3
    void push(int data)
    {
        if(next == capacity)
        {
            cout<<"stack is full"<<endl;
            return;
        }
        arr[next] = data;
        next++;
    }
    //4
    void pop()
    {
        if(next == 0)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        next--;
    }

    int size()
    {
        return next;
    }


};

class stack1{
    int * arr;
    int capacity;
    int nextI;

public:

    stack1()
    {
        capacity = 4;
       arr=new int[capacity];
        nextI = 0;
    }

    stack1(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
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
    void push(int data)
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

    int top()
    {
        if(isEmpty())
        {
            cout<<" stack is empty"<<endl;
            return -1;
        }

        return arr[nextI - 1];
    }
};

int main()
{
    stack1 s1(4);
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
   cout<<s1.top()<<endl;
   s1.pop();

   stack1 s2(8);

   for(int i=0;i<8;i++)
   {
       s2.push(i);
   }

   for(int i=0;i<8;i++)
   {
       cout<<s2.top()<<endl;
       s2.pop();
   }




}



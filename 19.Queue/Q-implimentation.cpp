#include<bits/stdc++.h>

using namespace std;

template<typename T>
class que{
    T *arr;
    int next;
    int firsti;
    int capacity;
    int size;

public:

    que()
    {
        capacity = 5;
        arr = new T[capacity];
        next = 0;
        firsti = -1;
        size = 0;
    }



    int getsize()
    {
        return size;
    }

    bool IsEmpty()
    {
        return size == 0;
    }

    void push(T data)
    {
        if(size == capacity)
        {
            T *newarr = new T[2*capacity];
            int j = 0;
            for(int i = firsti;i<capacity;i++)
            {
                newarr[j] = arr[i];
                j++;
            }

            for(int i=0;i<firsti;i++)
            {
                newarr[j] = arr[i];
                j++;
            }
            firsti = 0;
            next = capacity;
            delete []arr;
            capacity = 2 * capacity;
            arr = newarr;

        }


        arr[next] = data;
        next = (next + 1)%capacity;

        if(firsti == -1)
        {
            firsti = 0;
        }

        size++;
    }

    void pop()
    {
        if(size== 0)
        {
            cout<<"queue is empty "<<endl;
            return;
        }

        firsti++;
        size--;
    }

    T first()
    {
        if(size == 0)
        {
            cout<<" queue is empty"<<endl;
            return 0;
        }
        return arr[firsti];
    }


};


template<typename T>
class que1{
    T *arr;
    int nextI;
    int firstI;
    int capacity;
    int size;

public:

    que1()
    {
        capacity = 5;
        arr = new T[capacity];
        nextI = 0;
        firstI = -1;
        size = 0;
    }

     que1(int cap)
    {
        capacity = cap;
        arr = new T[capacity];
        nextI = 0;
        firstI = -1;
        size = 0;
    }

    int getsize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void push(T data)
    {
        if(size == capacity)
        {
            T *  newArr = new T[capacity * 2];
            int j = 0;
            for(int i=0;i<capacity;i++)
            {
                newArr[j] = arr[i];
                j++;
            }

            for(int i=0;i<firstI;i++)
            {
                newArr[i] = arr[i];
                j++;
            }
            firstI = 0;
            nextI =capacity;
            delete []arr;
            arr = newArr;
            capacity = capacity*2;
        }
        arr[nextI] = data;
        nextI = (nextI + 1)%capacity;
        size++;


    }

    T first()
    {
        if(isEmpty())
        {
            cout<<"que is empty"<<endl;
            return 0;
        }
        return arr[firstI];
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"que is empty"<<endl;
            return;
        }

        firstI++;
        size--;

    }



};


int main()
{

     que1<int> q;

    cout<<q.getsize()<<endl<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);



    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    cout<<q.first()<<endl;
    q.pop();
    q.pop();
    cout<<endl<<q.isEmpty()<<endl;

}





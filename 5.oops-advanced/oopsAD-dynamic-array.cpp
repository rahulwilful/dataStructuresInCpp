#include<iostream>
#include<cstring>

using namespace std;

class darray{
int *data;
int nexti;
int capacity;

public:

    darray(){
        data = new int[5];
        nexti=0;
        capacity=5;
    }

    darray(int c)
    {
        data = new int[c];
        nexti = 0;
        capacity = c;
    }

    void add(int element){              ///code double the size
        if(nexti == capacity)               ///checking if next iteration is valid or not if yes than size will be doubled
        {
            int *newdata = new int[capacity*2];      ///creating "newdata" member with doubled size
            for(int i=0;i<capacity;i++)               ///copying data in newdata
            {
                newdata[i]=data[i];
            }
            delete []data;       ///deleting elements from data
            data = newdata;      ///pointing data towards new data
            capacity = capacity*2;  ///increasing capacity
        }
        data[nexti] = element;      ///assigning data
        nexti++;
    }

    darray(darray const &d) ///deep copy constructor
    {
        nexti = d.nexti;
        capacity = d.capacity;

        this->data = new  int[d.capacity]; ///no need to add +1 coz its array not a string
        for(int i = 0;i < d.nexti;i++)     ///coz its not a string we need to copy elements with loop
        {
            data[i] = d.data[i];
        }

    }

    void operator= (darray const &d)    ///copy assingment function for deep copy
    {
        nexti = d.nexti;
        capacity = d.capacity;

        this->data = new int[d.capacity];
        for(int i = 0;i < d.nexti;i++)
        {
            data[i] = d.data[i];
        }
    }

    void add(int element, int i)   ///adding element at specific space
    {
        if(i < nexti)        ///adding if i less than nexti or capacity
        {
            data[i] = element;
        }
        else if(i == nexti)     ///calling size adding function  if i is equal to capacity
        {
            add(element);
        }
        else            /// returning nun if i is more than capacity
        {
            cout<<"invalid input"<<endl;
            return ;
        }
    }

    int get(int i)           ///code to get stored data
    {
        if(i>=0 && i<nexti)   ///checking if input is valid or not
        {
            return data[i];
        }
        else
        {
            return -404;
        }
        }


    void print()            ///print function to print
    {
        for(int i = 0; i < nexti ; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    int getcapacity()
    {
        return capacity;
    }


};

int main()
{
    darray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    cout<<d1.get(7)<<endl;

    d1.print();
    cout<<d1.getcapacity()<<endl;

    darray d2(d1);
    darray d3;
    d3 = d1;   ///copy assignment operator

    d1.add(100,0);



    d1.print();
    d2.print();
    d3.print();

    darray d4(10000);

    cout<<d4.getcapacity()<<endl;
}

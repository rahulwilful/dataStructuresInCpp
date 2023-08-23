#include<iostream>

using namespace std;

class darray{
    int *data;
    int nexti;
    int capacity;

public:

    darray()
    {
        data = new int[5];
        nexti = 0;
        capacity = 5;
    }

    void add(int element)  ///dynamic function to increase array size
    {
        if(nexti == capacity) //checking if size of array 'data' is not full before inserting next array
        {
            int *newdata = new int[capacity * 2]; //declaring new data member with  doubled size if array is full
            for(int i=0; i < capacity; i++) //loop to copy data to new data member
            {
                newdata[i] = data[i];
            }
            delete []data;           //deleting data from data member
            data = newdata;          //pointing old data member towards new data member
            capacity= capacity * 2;  //increasing capacity size by *2
        }
        data[nexti]=element;        //taking next element in old data member
        nexti++;
    }
    darray(darray const &d) ///deep copy constructor
    {
        nexti=d.nexti;
        capacity=d.capacity;

        this->data = new int[d.capacity];
        for(int i=0;i<d.nexti;i++)
        {
            data[i]=d.data[i];
        }
    }

    void print()
    {
        for(int i = 0; i < nexti; i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    void add1(int element, int  i)
    {
        if(i>=0 && i<nexti)
        {
            data[i] = element;
        }
        else if(i>nexti)
        {
            add(element);
        }
        else{
            cout<<endl<<"invalid"<<endl;
        }
    }

    int  getcapacity()
    {
        return capacity;
    }

    int getdata(int i)
    {
        if(i>=0 && i<nexti)
        {

            return data[i];
        }
        else
        {
            cout<<endl<<"invalid"<<endl;
        }







    }

};

int main()
{
    darray d1;
    int n,m=0;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(70);
    d1.add(80);
    d1.add(90);
    d1.add(11);
    d1.add(12);

    darray d2;
    d2=d1;
    d1.add1(1000,0);


    d1.print();
    d2.print();
    cout<<endl<<"capacity is : "<<d1.getcapacity()<<endl;
    cout<<endl<<"enter the size for input element : ";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter element no "<<i<<" : ";
        cin>>a[i];

        d1.add(a[i]);
    }
    d1.print();

    cout<<endl<<"capacity is : "<<d1.getcapacity()<<endl;

    cout<<endl<<"requested element is : "<<d1.getdata(0);
    int p,d;
    cout<<endl<<endl<<"enter the position to add element : ";
    cin>>p;
    cout<<endl<<"enter element : ";
    cin>>d;

    d1.add1(d,p);

    d1.print();
}

#include<iostream>
using namespace std;

class student{
    //public class
public:
        //default constructor
       /* student(){
            cout<<"constructor created"<<endl;
        }*/

        //parameterized construtor
        student(int r)
        {
            cout<<"parameterized constructor created "<<endl;

        }


        int age;
        //private class
private:
        int rn;
public:
    void display()
    {
        cout<<age<<" "<<rn<<endl;
    }
//code to access and read rn from private class
    int getrn()
    {
        return rn;
    }
//code to access and write rn from private class
    void setrn(int a)
    {
        if(a<0)
        {
            return;
        }
        rn = a;
    }
    student(int ag,int rn)
    {
        cout<<"this "<<this<<endl;
        cout<<"constructor 3 is called "<<endl;
        age = ag;       //here 'this' keyword is optional
        this->rn = rn; //here 'this' keyword is mandatory

    }
    ~student(){
        cout<<"distructiv constructor is called "<<endl;
    }
};



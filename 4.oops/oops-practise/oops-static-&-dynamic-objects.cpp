#include<iostream>
//#include"../oops-external-class.cpp"

using namespace std;

class student{
private:
    int rn;

public:
    int age;

    int getrn()
    {
        return rn;
    }

    void setrn(int a)
    {
        rn=a;
        cout<<endl<<rn;
    }




};

int main()
{

    student s1;

    student *s2= new student;

    s1.age=40;
    s1.setrn(10);
    (*s2).age=42;


    cout<<endl<<s1.age;
    (*s2).setrn(12);
    cout<<endl<<(*s2).age;
}

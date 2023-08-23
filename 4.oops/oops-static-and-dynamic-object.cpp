#include<iostream>
#include"oops-external-class.cpp"
using namespace std;



int main()
{
    //static object
    student s1,s2;

    //dynamic object

    student *s3 = new student;

    s1.age = 24;
    s1.rn = 53;

    cout<<s1.age;
    cout<<endl<<s1.rn;

    (*s3).age = 33;
    (*s3).rn = 43;



}

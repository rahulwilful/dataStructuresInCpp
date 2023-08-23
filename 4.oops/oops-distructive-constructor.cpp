#include<iostream>
#include"oops-external-class.cpp"

using namespace std;

int main()
{
    student s1(10,100);
    cout<<"s1 : ";
    s1.display();
    ///copy constructor
    student s2(s1);  ///constructor is copied here
    cout<<"s2 : ";
    s2.display();

    student s3(20,200);
    cout<<"s3 : ";
    s3.display();

    student s4(10,100);
    s4=s3;
    cout<<"s5 : ";
    s4.display();

    student *s5 = new student(30,300);
    cout<<"s5 : ";
    s5->display();

    delete s5;




}



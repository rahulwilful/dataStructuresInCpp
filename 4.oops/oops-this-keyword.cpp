#include<iostream>
#include"oops-external-class.cpp"
using namespace std;



int main()
{
    student s1(10,100);

    cout<<"address of s1 is "<<&s1<<endl;
    s1.display();
    student s2(11,110);

    cout<<"address of s2 is "<<&s2<<endl;
    s2.display();
    student s3(20);
    s3.display();



}


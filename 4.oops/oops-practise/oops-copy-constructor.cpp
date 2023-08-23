#include<iostream>

using namespace std;

class student{
int rn,age;

public:
    student(int rn,int age){
        this->rn=rn;
        this->age=age;
        print();
    }
    void print(){
        cout<<"the roll number is "<<rn<<endl<<"the age is "<<age<<endl<<endl;
    }


} ;

int main()
{
    student s1(13,33);
    student s2(s1);

    student *s3=new student(12,22);
    student *s4= new student(*s3);

    s2.print();
    (*s4).print();
}

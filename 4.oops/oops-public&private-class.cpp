#include<iostream>
#include"oops-external-class.cpp"

using namespace std;



int main()
{
    //static object
    //student s1,s2;

    //dynamic object

   // student *s3 = new student;

    s1.age = 24;
    //s1.rn = 53;//

    s1.display();

    (*s3).age = 33;
    //(*s3).rn = 43;

    //printin dynamic array
    cout<<endl<<(*s3).age<<endl;
    (*s3).display();
    //printing dynamic array in shortcut
    s3->display();

    //accessing age from private class and displaying it
    s1.setrn(53);
    s3->setrn(43);

    s1.display();
    s3->display();

    student s4(10);

    student *s5 = new student(99);

    student s6(10,100);
    s6.display();




}


#include<iostream>

using namespace std;

class student{

public:
    int age;
    int const rn; ///constant object cannot be changed and needs to assign the value while initialising or declaring

    student(int ag,int  roll):rn(roll),age(ag) ///assigning value to a constant 'rn' which is like 'int const rn=roll'
    {
        cout<<rn<<" "<<age<<endl;

    }

    void display()
    {
        cout<<rn<<" "<<age<<endl;
    }


};


int main()
{
    student s1(23,55);


    s1.display();
}

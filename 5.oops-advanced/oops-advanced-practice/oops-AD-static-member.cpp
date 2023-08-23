#include<iostream>

using namespace std;

class student{
     static int Ts;  ///declaring static member

public:
    int rn;
    int age;

    student()
    {
        Ts++;
    }

    void print() const
    {
        cout<<rn<<" "<<age<<endl;
    }

    static int getTs()
    {
        return Ts;
    }

};
int student::Ts;  ///initialising  static member

int main()
{
     student  s1;
     student  s2;
     student  s3;
     student  s4;
     student  s5;
     student  s6;
     student  s7;

     cout<<s1.rn<<" "<<s1.age<<endl;

     cout<<student::getTs()<<endl; ///printing static member
}

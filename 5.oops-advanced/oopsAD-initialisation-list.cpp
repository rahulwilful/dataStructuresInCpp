#include<iostream>

using namespace std;

class student{

public:
    int rn;
    const int age;
    int &x;


    student(int rn,int a):age(a),rn(rn),x(this->rn)
    {

        cout<<rn<<" "<<a<<" "<<x<<endl;
        //age=a;
    }
};

int main()
{
    student s1(10,20);
    s1.rn=10;
    student s2(s1);
    //s1.age=33;

}


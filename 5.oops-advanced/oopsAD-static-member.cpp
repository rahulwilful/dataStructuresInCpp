#include<iostream>
#include<cstring>

using namespace std;

class student{
    static int ts; ///total number of student present
public:
    int rn;
    int age;

    student(){
        ts++;
    }

    int getrn(){
        return rn;
    }

    static int getts()
    {
        return ts;
    }

};
int student::ts; ///initializing static member


int main()
{
    student s1,s2,s3,s4,s5,s6,s7,s8,s9,s0,s11;


    //cout<<student::ts<<endl;  ///printing static member
    cout<<student::getts<<endl;




}

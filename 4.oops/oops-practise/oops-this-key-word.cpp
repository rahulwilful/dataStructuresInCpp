#include<iostream>

using namespace std;

class student{

int rn,age;

public:
  student(int rn,int age)
  {
      this->rn=rn;
      this->age=age;
      print();
  }

    void print()
    {
        cout<<"the age is "<<age<<endl<<"the roll number is "<<rn;
    }

};

int main()
{
    student s1(10,33);

}

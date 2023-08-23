#include<iostream>
#include<cstring>

using namespace std;

class student{
int age;

public:
    char *name;
    student(int age,char *name)
    {
        this->age=age;                         ///shallow copy
        this->name = new char[strlen(name)+1]; ///deep copy
        strcpy(this->name,name);               ///deep copy
    }
    void print()
    {
        cout<<age<<" "<<name<<endl;
    }

};


int main()
{
    char name[]="rahul";
    student s1(20,name);
    s1.print();

    name[0]='l';

    student s2(30,name);
    s1.print();
    s2.print();




}

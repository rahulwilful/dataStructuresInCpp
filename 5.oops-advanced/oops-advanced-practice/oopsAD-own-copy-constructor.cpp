#include<iostream>
#include<cstring>

using namespace std;

class student{


public:
    int age;
    char *name;

    student(student const &s) ///deep copy constructor
    {
        this->age=s.age;  ///shallow copy
        this->name= new char[strlen(s.name)+1];  ///1.deep copy and this keyword is mandatory here
                                                ///2.and this statement creates new array like virtual array
        strcpy(this->name,s.name);             ///here it will copy all the contents from source of destination
    }

    student(int age, char *name) ///here its shallow copy constructor but arguments inside it are deep copy
    {
        this->age=age;    /// this keyword is mandatory here
        ///this->name=name; ///this keyword is mandatory here and shallow copy
        this->name = new char[strlen(name)+1]; ///1.deep copy and this keyword is mandatory here
                                                ///2.and this statement creates new array like virtual array
        strcpy(this->name,name);    ///here it will copy all the contents from source of destination
    }

    void display()
    {
        cout<<name<<" "<<age<<endl;

    }

};

int main()
{
    char name[]="rahul";
    student s1(20,name);
    s1.display();


    student s2(s1);
    s2.name[0]='w';
    s1.display();
    s2.display();

}

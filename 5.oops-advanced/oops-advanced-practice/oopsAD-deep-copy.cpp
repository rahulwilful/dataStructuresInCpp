#include<iostream>
#include<cstring>

using namespace std;

class student{
private:
    int age;
    char *name;

public:
    student(int age, char *name)
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
    student s1(23,name);
    s1.display();

    name[2] = 'm';

    student s2(22,name);
    s2.display();
     s1.display();
}

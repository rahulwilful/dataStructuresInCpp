#include<iostream>
#include<cstring>

using namespace std;

class student{
int age;

public:
    char *name;
    student(int age,char *name)
    {
        this->age= age;// shallow copy
        this->name =new char [strlen(name)+1];  //deep copy
        strcpy(this->name,name);
    }

    student(student const &s2)
    {

        this->age = s2.age;
        this->name = new char[strlen(s2.name)+1];
        strcpy(this->name,s2.name);
    }

    void print()
    {
        cout<<this->age<<" "<<this->name<<endl;
    }
};

int main()
{
    char name[]= "rahul";
    student s1(20,name);
    s1.print();

    student s2(s1);
    s2.name[0]='l';

    s1.print();
    s2.print();

}
/*#include<iostream>
#include<cstring>

using namespace std;

class student{
int age;

public:
    char *name;
    student(student const &s)
    {
        this->age = age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    student(int age,char *name)
    {
        this->age= age;// shallow copy
        this->name =new char [strlen(name)+1];  //deep copy
        strcpy(this->name,name);
    }

    void print()
    {
        cout<<age<<" "<<name<<endl;
    }

};

int main()
{
    char name[] = "rahul";
    student s1(10,name);
    s1.print();


    student s2(s1);
    s2.name[2]='v';
    s1.print();
    s2.print();
}
*/

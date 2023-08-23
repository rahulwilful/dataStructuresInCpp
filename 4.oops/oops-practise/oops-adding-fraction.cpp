#include<iostream>

using namespace std;

class student{
    int num;
    int din;

public:
    student(int num, int din)
    {
        this->num = num;
        this->din = din;
    }

    void print(){
        cout<<num<<"/"<<din<<endl;
    }

    void add(student f2){
        int lcm = din*f2.din;
        int x = lcm/din;
        int y = lcm/f2.din;
        int frac = num * x + f2.num * y;

        num = frac;
        din = lcm;
    simplify();

    }

   void simplify(){

        int gcd = 1;
        int j = min(this->num,this->din);

        for(int i=1;i<=j;i++)
        {
                if(num%i==0 && din%i==0)
                {
                    gcd = i;
                }
        }



    num = num/gcd;
    din = din/gcd;}

};

int main()
{
        student *s1= new student(10,2);
        student *s2=new student(15,4);

        (*s1).add((*s2));
        (*s1).print();
        (*s2).print();
}

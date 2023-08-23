#include<iostream>
#include<cstring>
using namespace std;

class fraction{
int num;
int din;

public:
    fraction(int num,int din)
    {
        this->num=num;
        this->din=din;
    }

     void print()
     {
         cout<<num<<" / "<<din<<endl;
     }

     fraction add(fraction f2)
     {
         int lcm = din * f2.din;
         int x = lcm/din;
         int y = lcm / f2.din;
         int nom = num * x + f2.num * y;

         fraction fnew(nom,lcm);

         fnew.simplify();

         return fnew;
     }

     void simplify()
     {
         int gcd = 1;
         int j = min(this->num,this->din);

         for(int i=1;i<=j;i++)
         {
             if(num%i == 0 && din%i == 0)
             {
                 gcd = i;
             }
         }
         num=num/gcd;
         din=din/gcd;
     }

     fraction& operator++ () /// pre increament
     {
         num=num+din;
         simplify();


        //cout<<num<<endl;
         return *this;
     }

};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    f2.print();

    ++f1; ///pre increamenting f1
   // fraction f3 = f1.add(f2);
    fraction f3 = ++f2;
    f1.print();
    f2.print();
    f3.print();

    fraction f4 = ++(++f3); /// nested pree increament
    f3.print();
    cout<<"f4 - ";
    f4.print();


    //f3.print();

}

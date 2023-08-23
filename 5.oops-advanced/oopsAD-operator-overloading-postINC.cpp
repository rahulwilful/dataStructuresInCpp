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

     fraction operator++ (int) /// post increment
     {
         fraction fnew(num,din);
         num=num+din;
         simplify();

        fnew.simplify();
        //cout<<num<<endl;
         return fnew;
     }

     fraction& operator+= (fraction &f2)
     {
         int lcm = din * f2.din;
         int x = lcm/din;
         int y = lcm / f2.din;
         int nom = num * x + f2.num * y;

         num = nom;
         din = lcm;

         simplify();

         return *this;
     }

};

int main()
{

    int i=5,j=3;
    (i+=j)+=j;
    cout<<i<<" "<<j<<endl;
    fraction f1(10,2);
    fraction f2(15,4);

    fraction f3 =f1++; ///post increment and nesting is not allowed ++ in post increment

    f1.print();
    f3.print();

   cout<<"////////"<<endl;

   fraction f4(10,3);
   fraction f5(5,2);

   f4+=f5;

   f4.print();
   f5.print();

   cout<<"////////"<<endl;

   fraction f6(10,3);
   fraction f7(5,2);

   (f6+=f7)+=f7;

   f6.print();
   f7.print();



}


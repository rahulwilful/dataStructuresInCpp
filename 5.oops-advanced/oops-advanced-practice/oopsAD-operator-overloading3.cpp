#include<iostream>

using namespace std;

class fraction{


public:
    int num;
    int den;

    fraction(int num,int den)
    {
        this->num=num;
        this->den=den;
    }

    void print()
    {
        cout<<num<<" / "<<den<<endl;
    }

    fraction operator++(int)  ///post increment and writing '(int)' is must to define post increment
    {                        ///nesting is not defined for post increment it may throw error or wrong output
        fraction fnew(num,den);
        num=num+den;
        simplify();
        fnew.simplify();

        return fnew;
    }

    void simplify(){

        int gcd = 1;
        int j = min(this->num,this->den);

        for(int i=1;i<=j;i++)
        {
                if(num%i==0 && den%i==0)
                {
                    gcd = i;
                }
        }



    num = num/gcd;
    den = den/gcd;
    }

    fraction& operator+=(fraction const &f2) /// += operator overloading function and nesting is allowed here
    {
        int lcm= den * f2.den;
        int x = lcm/den;
        int y= lcm/f2.den;
        int sum= x*num+y*f2.num;

        num=sum;
        den=lcm;
        simplify();
        return *this;

    }





};

int main()
{
    fraction f1(10,2);

    fraction f2=f1++;

    f1.print();
    f2.print();
    fraction f3(10,3);
    fraction f4(5,2);

    //f3+=f4;
    (f3+=f4)+=f4;
    f3.print();
    f4.print();





}


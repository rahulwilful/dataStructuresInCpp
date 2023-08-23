
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

    fraction &operator++() ///pree incrementing function using operator overloading
    {
        num=num+den;
        simplify();

        return *this;
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





};

int main()
{
    fraction f1(10,2);
    f1.print();

    //++f1;
    f1.print();

    ++(++f1);
    f1.print();




}

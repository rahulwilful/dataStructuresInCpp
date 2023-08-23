#include<iostream>
using namespace std;

class fraction {
private :
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }

    void add(fraction f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = numerator * x + f2.numerator * y;

        numerator = num;
        denominator = lcm;

        simplify();
    }
    void simplify(){

        int gcd = 1;
        int j = min(this->numerator,this->denominator);

        for(int i=1;i<=j;i++)
        {
                if(numerator%i==0 && denominator%i==0)
                {
                    gcd = i;
                }
        }



    numerator = numerator/gcd;
    denominator = denominator/gcd;
    }


};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);

    f1.add(f2);
    f1.print();
    f2.print();

 return 0;
}

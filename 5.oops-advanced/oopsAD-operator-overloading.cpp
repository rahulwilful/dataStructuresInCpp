#include<iostream>


using namespace std;



class fraction{
private:
    int num;
    int din;

public:

    fraction(int num, int din)
    {
        this->num = num;
        this->din = din;
    }

    void print()
    {
        cout<<num<<" / "<<din<<endl;
    }

    fraction add(fraction f2)  ///fraction add constructor allows to store result in new object
    {
        int lcm = din*f2.din;
        int x = lcm/din;
        int y = lcm/ f2.din;
        int nom = num * x + f2.num * y;

        //num = nom;
        //din = lcm;
        fraction fnew(nom,lcm);

    fnew.simplify();

    return fnew;
    }

    fraction operator+(fraction const &f2)const  ///operator overloading
    {
        int lcm = din*f2.din;
        int x =lcm/din;
        int y = lcm/ f2.din;
        int nom = num * x + f2.num * y;

        fraction fnew(nom,lcm);    ///storing result in new object

        fnew.simplify();           ///calling for simplify function for fnew object

        return fnew;
    }



    void simplify()
    {
        int gcd = 1;
        int j = min(this->num,this->din);

        for(int i = 1; i <= j; i++)
        {
            if(num%i == 0 && din%i == 0)
            {
                gcd = i;
            }
        }
        num=num/gcd;
        din=din/gcd;



    }

    fraction operator*(fraction f2)///multiply operator
        {
            num=num*f2.num;
            din=din*f2.din;

            fraction fnew(num,din);
              fnew.simplify();
            return fnew;
        }

    bool operator== (fraction const &f2) const
    {
        return(num == f2.num && din == f2.din);
    }


};


int main()
{
    fraction f1(10,2);
    fraction f2(15,4);

    fraction f3 = f1.add(f2);
    fraction f4 = f1 + f2;
    //f1.add(f2);
    f1.print();
    f2.print();
    f3.print();
    f4.print();

    f3=f1*f2;
    f3.print();

    if(f1 == f2)
    {
        cout<<"operators are equal"<<endl;
    }
    else
    {
        cout<<"operators are not equal"<<endl;
    }

 return 0;
}

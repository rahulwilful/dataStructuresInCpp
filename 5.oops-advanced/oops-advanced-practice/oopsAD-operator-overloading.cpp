#include<iostream>

using namespace std;

class fraction{


public:
    int r;

    fraction (int r)
    {
        this->r=r;
    }

    fraction add(fraction f2) ///normal or inbuilt operator overloading
    {
        r=r+f2.r;


    }

    fraction operator+ (fraction f2) ///manual or custom operator overloading
    {
        int s=r+f2.r;

        return s;
    }

    bool operator== (fraction f2)
    {
        return (r==f2.r);
    }





};

int main()
{
    fraction f1(15);
    fraction f2(16);

    cout<<f1.r<<endl;
    cout<<f2.r<<endl;

    f1.add(f2);

    cout<<endl<<f1.r<<endl;
    cout<<f2.r<<endl;

    fraction f3=f2+f1;

    cout<<endl<<f3.r<<endl;
    cout<<f2.r<<endl;
    fraction f4(47);
    if(f3 == f4)
    {
        cout<<"objects are equal "<<endl;
    }
    else{
        cout<<"else objects are not equal"<<endl;
    }



}

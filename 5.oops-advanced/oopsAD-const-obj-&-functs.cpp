#include<iostream>

using namespace std;

class fraction{
int num,den;

public:
    fraction(){

    }

    fraction(int num,int den)
    {
        this->num=num;
        this->den=den;
    }

    int getnum() const {
        return num;
    }

    int getden() const {
        return den;
    }

    void setnum(int n){
        num=n;
    }

    void setden(int d)
    {
        den=d;
    }

    void print() const {
        cout<<num<<" "<<den<<endl;
    }
};

int main()
{
    fraction const f1(10,5);

    cout<<f1.getnum()<<" "<<f1.getden()<<endl;

    f1.print();
}

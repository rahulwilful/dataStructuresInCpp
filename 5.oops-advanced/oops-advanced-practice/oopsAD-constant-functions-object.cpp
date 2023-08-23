#include<iostream>

using namespace std;

class object{
    int num;
    int den;

public:

    object(int num, int den)
    {
        this->num=num;
        this->den=den;
    }

    int getnum() const  /// constant function and constant function does not change any value
    {
        return num;
    }

    int getden() const ///constant funcion
    {
        return den;
    }

    void setnum(int n)  /// cannot be constant function
    {
        num=n;
    }
    void setden(int d)
    {
        den=d;
    }

};

int main()
{
    object s1(10,20);
    object const s2(11,21); ///constant object and can only call constant function

    cout<<s2.getnum()<<endl;
    cout<<s2.getden()<<endl<<endl;

    cout<<s1.getnum()<<endl;
    cout<<s1.getden()<<endl;

}

#include<bits/stdc++.h>

using namespace std;

class add{

public:
    int a;

    add(int a)
    {
        this->a = a;
    }
    add operator+(add a1)
    {
        int n = this->a + a1.a;

        add aa(n);

        return aa;
    }


    void display()
    {
        cout<<a<<endl;
    }


};

int main()
{
    add a1(4);
    add a2(32);
    add a3 = a1+a2;

    a1.display();
    a2.display();
    a3.display();
}

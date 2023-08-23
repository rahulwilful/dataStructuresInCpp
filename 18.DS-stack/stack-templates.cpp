#include<bits/stdc++.h>

using namespace std;

template<typename T, typename V>

class pairr{
    T x;
    V y;

public:

    void setx(T x)
    {
        this->x = x;
    }

     T getx()
    {
        return x;
    }

    void sety(V y)
    {
        this->y =y;
    }
    V gety()
    {
        return y;
    }

};

int main()
{
    ///using same identifier for both x and y;
   /* pairr<int> p1;

    p1.setx(1);
    p1.sety(2);

    cout<<p1.getx()<<" "<<p1.gety()<<endl;;

    pairr<double> p2;

    p2.setx(4.44);
    p2.sety(2.23);

    cout<<p2.getx()<<" "<<p2.gety()<<endl;

    pairr<char> p3;

    p3.setx(4);
    p3.sety(5);

    cout<<p3.getx()<<" "<<p3.gety();*/

    ///using two different identifiers for x and y;

    /*pairr<int,double> p1;

    p1.setx(1.22);
    p1.sety(3.22);

    cout<<p1.getx()<<" "<<p1.gety()<<endl;   */

    ///using 3 different identifiers for x and y ;

    pairr<pairr<int,int> , int> p;

    p.sety(30);

    pairr<int ,int> temp;

    temp.setx(10);
    temp.sety(20);

    p.setx(temp);
    cout<<p.getx().getx()<<" "<<p.getx().gety()<<" "<<p.gety()<<endl;


}

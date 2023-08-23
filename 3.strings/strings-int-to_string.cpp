#include<iostream>

using namespace std;

int main()
{
    int a = 123;
    //integer to string
    string s4 = to_string(a);

    cout<<s4;
    s4[1]='0';
    //string to integer
    a = atoi(s4.c_str());

    cout<<endl<<s4;
}

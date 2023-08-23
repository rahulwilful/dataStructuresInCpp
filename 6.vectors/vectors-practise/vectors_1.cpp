#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
    vector<int> *v= new vector<int>;
    vector<int> vv;
    vector<int> c;


    vv.push_back(100);
    vv.push_back(20);
    vv.push_back(30);
    vv.push_back(40);

    cout<<vv[0]<<endl; //printing manually
    cout<<vv[1]<<endl;
    cout<<vv[2]<<endl;
    cout<<vv[3]<<endl;

    cout<<endl;
    for(int i=0;i<vv.size();i++) //printing using loop
    {
        cout<<vv[i]<<endl;
    }
    cout<<endl<<vv.at(0)<<endl; //printing manually using at function
    cout<<vv.at(1)<<endl;
    cout<<vv.at(2)<<endl;
    cout<<vv.at(3)<<endl<<endl;

    vv[0]=200; //changing element at specific position
    //sort(vv.begin,vv.end);
    for(int i=0;i<vv.size();i++) //printing using loop using at function
    {
        cout<<vv.at(i)<<endl;
    }

    cout<<endl;

    for(int i=0;i <100;i++) //inserting element with loops
    {
        cout<<endl<<"size : "<<c.size()<<endl; //printing size basically total number pf elements
        cout<<"capacity : "<<c.capacity()<<endl; //printing capacity basically how much element it can store currently without doubling its capacity
        c.push_back(i+1); //inserting elements
        cout<<c.at(i)<<endl;
    }

    cout<<endl;

    vector<int> b(10,-9); ///creating vector with predefined size and element
    for(int i=0;i<b.size();i++) //printing using loop using at function
    {
        cout<<b.at(i)<<endl;
    }

}

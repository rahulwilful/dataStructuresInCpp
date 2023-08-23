#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> *vp = new vector<int>();
    vector<int> v;
    for(int i=0;i<20;i++)
    {
        cout<<"size     : "<<v.size()<<endl;     ///printing capacity of vector
        cout<<"capacity : "<<v.capacity()<<endl;  ///printing size of vector after every element inserted
        v.push_back(i+1);

    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {

        cout<<"value of v"<<i<<" is :"<<v.at(i)<<endl;
    }
    cout<<endl;
    cout<<endl;

    vector<int> v2(10,-2) ;///creating vector with predefined size and initializing it with -2 number
    for(int i=0;i<v2.size();i++)
    {
        cout<<"value of v2 : "<<i<<" is : "<<v.at(i)<<endl;
    }
}

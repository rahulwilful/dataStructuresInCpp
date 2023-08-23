#include<bits/stdc++.h>

using namespace std;



int main()
{

    vector<int> *v = new vector<int>();
    vector<int> vv;

    for(int i=0 ; i<1000000 ;i++)
    {
        vv.push_back(i);
    }

    for(int i=0 ; i<vv.size() ;i++)
    {
        cout<<vv.at(i)<<endl;
    }

    /*
    vector<int> *v =new vector<int>();  ///dyanamic
    vector<int> vv;      ///static

    vv.push_back(20);    ///push the element on stack at last or insert element in array in last
    vv.push_back(30);
    vv.push_back(10);

    vv[1] = 100;

    cout<<vv[0]<<endl; ///printing specific vector

    cout<<endl;
    cout<<endl;

   // cout<<vv[1]<<endl;
    //cout<<vv[2]<<endl;

   // vv[4] = 345;  ///use 'push_back()' function to insert arrays do not use this method coz size will not increase of vector
    //vv[5] = 545;  /// and if u use 'push_back' function after using [] brackets than data stored with [] brackets will be lost

    vv.push_back(100);
    vv.push_back(200);

    cout<<vv.at(4)<<endl; ///this function will print the element of given position

    vv.pop_back();     ///"pop_back" will basically pop out or will delete the last element of vector

    cout<<endl;
    cout<<endl;

    sort(vv.begin(),vv.end());    ///inbuilt sorting function

    for(int i = 0; i<vv.size(); i++)  ///printing elements of the vector using for loop
    {
        cout<<vv.at(i)<<endl;
    }

    cout<<endl;
    cout<<endl;

    cout<<vv.at(5)<<endl;  ///basically it will throw error coz trying to print out of scope array




    /*cout<<vv[0]<<endl;
    cout<<vv[1]<<endl;
    cout<<vv[2]<<endl;
    cout<<vv[3]<<endl;
    cout<<vv[4]<<endl;
    cout<<vv[5]<<endl;*/




}


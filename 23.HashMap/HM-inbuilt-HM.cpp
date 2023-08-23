#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int> mymap;
    ///inserting in unorderwed_map
    //1st way
    pair<string,int> p("abc",1);

    mymap.insert(p);
    //2nd way
    mymap["def"] = 2;

    cout<<mymap["abc"]<<endl;
    cout<<mymap.at("def")<<endl;
    cout<<"size: "<<mymap.size()<<endl;
    //all the keys should be uniqe  u cant use same key for different values.
    mymap["def"] = 3;
    cout<<mymap.at("def")<<endl;

    //cout<<mymap.at("ghi")<<endl;
    cout<<mymap["ghi"]<<endl;

    cout<<"size : "<<mymap.size()<<endl;

    //check presence of key

    if(mymap.count("ghi") > 0) //here key is present coz square braces will insert ghi but at() will not insert ghi
    {
        cout<<endl<<"key is present"<<endl;
    }
    else
    {
        cout<<endl<<"key is not present"<<endl;
    }

    //updating values
    mymap["abc"] = 20;

    cout<<mymap.at("abc")<<endl;

    //erasing an key from map
    mymap.erase("ghi");

    cout<<"size : "<<mymap.size()<<endl;

    //check presence of key

    if(mymap.count("ghi") > 0)
    {
        cout<<endl<<"key is present"<<endl;
    }
    else
    {
        cout<<endl<<"key is not present"<<endl;
    }


}

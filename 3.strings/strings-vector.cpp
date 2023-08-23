    #include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    string s;

    string *s2 = new string;

    cout<<"enter string : ";
    getline(cin,s);

    cout<<s<<endl;

    cout<<endl<<"enter 2nd string : ";
    getline(cin,*s2);

    cout<<*s2<<endl;

    vector<string> v;
    v.push_back(*s2);
    v.push_back("namaste");
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;

    }

    //accessing the specific value and changing it
    v[0] = 'w';

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;

    }
    //using sorting algorithm from algorithm library
    for(int i=0;i<v.size();i++)
    {
        sort(v[i].begin(),v[i].end());
        cout<<endl<<v[i]<<endl;
    }

    // using substring to discard previous values

    cout<<endl<<s.substr(1);
    //here it will start printing from 1 and it will stop at 3
    cout<<endl<<s.substr(1,3);

    //storing in another character

    string s3 = s.substr(1,3);
    cout<<endl<<s3;

    //using find function
    cout<<endl<<"requested elements present at: "<<s.find("ahu");
}

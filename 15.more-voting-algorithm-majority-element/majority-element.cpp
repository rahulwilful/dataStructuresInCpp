#include<bits/stdc++.h>

using namespace std;

void majority(vector<int>& num)
{
    int count=1;
    int s=0;
    int  check=0;

    for(int i=0;i<num.size()-1;i++) ///loop to check majority element
    {
        if(num[s]==num[i])          ///incrementing count if same element is equal
        {
            count++;
        }
        else{    ///decrementing count if element is  not equal
            count--;
            if(count==0)    ///after decrementing if count is zero than updating the checking/comparing element
            {               ///and setting count equals to 1
                s=i;
                count=1;
            }
        }
    }

    for(int i=0;i<num.size()-1;i++)///loop to find number of found majority element appeared in array
    {
        if(num[s]==num[i])
        {
            check++;
        }
    }

    if(check>num.size()/2) ///checking if found majority is greater than array.size/2;
    {
        cout<<"majority element is "<<num[s];
    }
    else{
        cout<<"there is no majority element in this array";
    }
}

int main()
{
    vector<int> v;


    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);

    majority(v);


}

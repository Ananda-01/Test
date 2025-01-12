#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(10); // vector move forward by push back 
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;  // here capacity double hoyeb gece

    // vector<int>v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear();  // do not delete the memory,only clear the value
    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(3);  // size decreasing
    // v.resize(7,80);  //size increasing
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    // cout<<v[v.size()-1]<<endl;
    // cout<<v.back();

    // cout<<v[0]<<endl;
    // cout<<v.front();


    // we use iterator when we work with pointer
    // vector<int>::iterator it; // equivalent auto syntax
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
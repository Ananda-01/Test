#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v={10,20,30};
    // vector<int>x={1,2,3};
    // v=x;  // vector assign
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    vector<int>v={10,20,30,40,50};
    v.pop_back();
    v.pop_back();  // delete the value from right side
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
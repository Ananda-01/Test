#include<bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    // vector<int>v={1,2,3,2,4,3,2,4,5};
    // replace(v.begin(),v.end(),2,50);
    // for(int x:v)
    // {
    //     cout<<x<<" "; 
    // }

    // find
    vector<int>v={1,2,3,2,4,3,2,4,5};
    auto it= find(v.begin(),v.end(),100);
    if(it==v.end()) 
    {
        cout<<"Not found";
    }
    else 
    {
        cout<<"Found";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v2={10,20,40};
    // v.insert(v.begin()+2,10);  // single value insert
    v.insert(v.begin()+2,v2.begin(),v2.end()); // multiple value insert
   // range based for loop=shortcut loop
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
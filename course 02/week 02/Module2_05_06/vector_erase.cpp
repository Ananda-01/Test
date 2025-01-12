#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};

   // delete element in specific position
    v.erase(v.begin()+2);  // delete single element
    // v.erase(v.begin()+2,v.begin()+4);  // delete multiple element
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
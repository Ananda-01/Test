#include<bits/stdc++.h>
using namespace std;
int main()
{
    // first type to take input
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int a;
    //     cin>>a;
    //     v.push_back(a);  // it takes input by puch back way
    // }

    // second type
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}
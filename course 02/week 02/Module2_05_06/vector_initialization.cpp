#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;  // type 1
    // vector<int> v(5); type 2
    // vector<int>v(5,76); // type 3

    // vector<int>v1(5,45);
    // vector<int>v(v1); // type 4

    // int a[6]={1,2,3,4,5,6};
    // vector<int>v(a,a+6); // type 5

    vector<int>v={1,2,3,8};  // vector a kind of dynamic array here declaring size not necessary
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    return 0;
}
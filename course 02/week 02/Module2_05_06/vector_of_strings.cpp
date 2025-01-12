#include<bits/stdc++.h>
using namespace std;
int main()
{
    // first type to take string input without space
    // int n;
    // cin>>n;
    // vector<string>v;
    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
    // for(string a:v)
    // {
    //     cout<<a<<" ";
    // }

    // second type
    // int n;
    // cin>>n;
    // vector<string>v(n);
    // for(int i=0;i<n;i++)
    // {
    //    cin>>v[i];
    // }
    // for(string a:v)
    // {
    //     cout<<a<<" ";
    // }

    // string input with space
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }
    for(string a:v)
    {
        cout<<a<<endl;
    }


    return 0;
}
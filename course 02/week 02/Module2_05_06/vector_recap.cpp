#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
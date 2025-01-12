#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto i : s)
            mp[i]++;
            
        for (char ch = 'A'; ch <= 'G'; ch++)
        {
            ans = ans + (max(0, m - mp[ch]));
        }
        cout << ans << endl;
    }
    return 0;
}

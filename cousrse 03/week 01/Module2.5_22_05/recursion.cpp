#include <bits/stdc++.h>
using namespace std;
int fun(string s, int i)
{
    if (s[i] == '\0')
        return 0;
    int l = fun(s, i + 1);
    return l + 1;
}
int main()
{
    string s;
    cin >> s;
    int l = fun(s, 0);
    cout << l;
    return 0;
}
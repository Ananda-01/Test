#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int flag = 0;
    int l = 0;
    int r = v.size() - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == x)
        {
            flag = 1;
            break;
        }
        else if (v[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (flag == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
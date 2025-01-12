#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int a = abs(x1 - x2) + abs(x3 - x2);
        int b = abs(x2 - x1) + abs(x3 - x1);
        int c = abs(x1 - x3) + abs(x2 - x3);
        if (a <= b && a <= c)
        {
            cout << a << endl;
        }
        else if (b <= a && b <= c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}
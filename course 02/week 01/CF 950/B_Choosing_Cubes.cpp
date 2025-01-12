#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int fav = v[f - 1];
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    bool flag;
    for (int i = k; i < n; i++)
    {
        if (v[i] == fav)
        {
            flag = true;
        }
    }
    for (int i = 0; i < k; i++)
    {
         if (v[i] == fav)
        {
            cout << "YES" << endl;
            break;
        }

        else if(v[i] != fav)
        {
            cout << "NO" << endl;
            break;
        }
        if (flag)
        {
            if (v[i] == fav)
            {
                cout << "MAYBE" << endl;
                break;
            }
            else 
            {
                cout<<"NO"<<endl;
                break;
            }
        }

       
    }
    return 0;
}
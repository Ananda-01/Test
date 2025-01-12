#include <iostream>
#include <algorithm>
using namespace std;
// calculating max or min
// int my_max(int a,int b)
// {
//     if(a>b) return a;
//     else return b;
// }
// int my_min(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }

// we can do this using built in function
int main()
{
    int a, b;
    cin >> a >> b;
    // int max=my_max(a,b);
    // int min=my_min(a,b);
    int mx = max(a, b); // using built in function
    int mn = min(a, b); // using built in function
    cout << mx << " " << mn;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[3]={2,4,6};
    int *p=&ar[0];
    int *q=ar;
    cout<<p<<" "<<q;
    //cout<<ar[0];
    return 0;
}
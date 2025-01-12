#include <bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l={2,3,3,4};
   l.unique();
   for(int val:l)
   {
    cout<<val<<" ";
   }

    return 0;
}
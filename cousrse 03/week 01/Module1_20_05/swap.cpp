#include<iostream>
#include<utility>
// value swapping
using namespace std;
// void my_swap(int* a,int* b)
// {
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    // my_swap(&a,&b);
    swap(a,b);  // we can swap value using this built in function
    cout<<a<<" "<<b;
    return 0;

}

// Recap pointer topic

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int *p=&a;
//     int *q=&b;
//     cout<<p<<" "<<*q<<endl;
//     return 0;
// }
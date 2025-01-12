#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    int flag=0;
    // algorithm of binary search
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
           flag=1;
           break;
        }
        if(a[mid]<x)
        {
            //dane jao
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
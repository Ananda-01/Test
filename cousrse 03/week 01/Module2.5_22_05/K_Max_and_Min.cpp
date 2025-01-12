#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
        // For minimum
    if(a<=b && a<=c)
    {
        printf("%d ",a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d ",b);
    }
    else
    {
        printf("%d ",c);
    }
    // For maximum
    if(a>=b && a>=c)
    {
        printf("%d\n",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",c);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class CustomSort
{
    public:
    char c;
    int cnt;
};
bool cmp(CustomSort a,CustomSort b)
{
    if(a.cnt>b.cnt)  return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    CustomSort freq[26];
    // value initialize
    for(int i=0;i<26;i++)
    {
        freq[i].c=(i+97);
        freq[i].cnt=0;
    }
    // character by character input
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        freq[c-97].cnt++;
    }
    sort(freq,freq+26,cmp);  // using sort function

    // print sorted character
    // for(int i=0;i<26;i++)
    // {
    //     cout<<freq[i].c<<" "<<freq[i].cnt<<" "<<endl;
    // }

    // print certain character
    //  for(int i=0;i<26;i++)
    // {
    //    if(freq[i].cnt>0)
    //    {
    //      cout<<freq[i].c<<" "<<freq[i].cnt<<" "<<endl;
    //    }
    // }

    // print desired output
    for(int i=0;i<26;i++)
    {
        if(freq[i].cnt>0)
        {
            for(int j=0;j<freq[i].cnt;j++)
            {
                cout<<freq[i].c;
            }
        }
    }

    return 0;
}
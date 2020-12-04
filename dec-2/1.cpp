#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int s,w1,w2,w3,ans=0;
    //int arr[s];
    cin>>s>>w1>>w2>>w3;
    if(s>=w1+w2+w3)
    {
        ans=1;
    }
    else if(s>=w1+w2)
    {
        ans=2;
    }
    else if(s>=w2+w3)
    {
        ans=2;
    }
    else
    {
        ans=3;
    }
    cout<<ans;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       solve();
   }
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
   int n;cin>>n;
   int p[20]={0};
   ll sum=0;
   ll ans=INT_MAX;
   for(int i=0;i<n;i++)
     cin>>p[i],sum+=p[i];
    for(int i=0;i<(1<<n);i++) //creating subsets ,no of subset will be 1<<n(or) 2^n
    {
     ll c=0;
     for(int j=0;j<n;j++){
      if((i>>j)&1) c+=p[j];}

     ans= min(ans,abs(sum-c-c));
    }
    cout<<ans;
    return 0;
}

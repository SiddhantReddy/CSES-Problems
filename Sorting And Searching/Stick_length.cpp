#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
       cin>>a[i];
    sort(a.begin(),a.end());
    int med=ceil(n/2); 
    ll ans=0;
    for(int i=0;i<n;i++)
      ans+=abs(a[i]-a[med]); 
    cout<<ans;
	return 0;
}

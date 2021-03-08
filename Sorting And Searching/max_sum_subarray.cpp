#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
       cin>>a[i];
    ll maxsum=INT_MIN;
    ll cursum=0;   
    for(int i=0;i<n;i++)
    {
     cursum+=a[i];
     if(cursum > maxsum)
        maxsum = cursum;
     if(cursum < 0)
       cursum=0;       
    }
    cout<<maxsum;
	return 0;
}

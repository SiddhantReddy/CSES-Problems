#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
   int n,m,k;cin>>n>>m>>k;
   vector<int> des,s;
   for(int i=0;i<n;i++)
      {
       int temp;cin>>temp;
       des.push_back(temp);  
      } 
   for(int i=0;i<m;i++)
      {
       int temp;cin>>temp;
       s.push_back(temp);  
      }   
   sort(des.begin(),des.end());
   sort(s.begin(),s.end());
   int ans=0;
   while(m>=1 && n>=1)
   {
    if(des[n-1]>=s[m-1]-k && des[n-1]<=s[m-1]+k) 
      {
       ans++;n--;m--;   
      }
    else if(des[n-1]>s[m-1]+k)
      n--;
    else
      m--;   
   }
   cout<<ans;
    return 0;
}

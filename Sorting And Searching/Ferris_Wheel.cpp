#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
   int n,x;cin>>n>>x;
   vector<int> w;
   for(int i=0;i<n;i++)
      {
       int temp;cin>>temp;
       w.push_back(temp);  
      } 
   sort(w.begin(),w.end());
   int ans=0;
   int i=0,j=n-1;
   while(i<j)
   {
    if((w[j]+w[i])>x)
    { ans++;j--;}
    else
    {ans++;i++;j--;}
   } 
   if(i==j) ans++;
   cout<<ans;
    return 0;
}

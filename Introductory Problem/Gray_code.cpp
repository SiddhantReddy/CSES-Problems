#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<pow(2,n);i++)
    {  
      int val = (i ^ (i >> 1));  // converting to next decimal value
      bitset<16> r(val);
      string s=r.to_string();  
      cout<<s.substr(16-n)<<endl;
    }
   return 0;
}
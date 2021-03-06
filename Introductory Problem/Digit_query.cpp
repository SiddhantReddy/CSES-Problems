#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{ 
    ll arr[16]={0};
    arr[0]=10;
    ll p=10;
    for(int i=1;i<16;i++){ 
      arr[i]=arr[i-1]+9*p*(i+1);
      p*=10;
    }
    // for(int i=0;i<16;i++) 
    //   cout<<arr[i]<<endl; 
    int t;
    cin>>t;
    while (t--)
    {
    int n;cin>>n;
    int index=0;    
    for(int i=0;i<16;i++)
       {
         if(n<arr[i])
           index=i;  
       }
    


    }

    return 0;
}

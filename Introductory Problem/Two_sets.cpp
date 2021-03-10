#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    int n;cin>>n;
    vector<int> one ,two;
    if(n%4==0 || n%4==3)
      {
        cout<<"YES"<<endl;
        if(n%4==3)
        {
         one.push_back(1);
         one.push_back(2);
         two.push_back(3);
         int c=4;
         while(c<=n)
         {
          if(c%4==3 || c%4==0)
           one.push_back(c);     
          else
           two.push_back(c);
          c++;      
         }
         cout<<(n/2)+1<<endl;
         for(int j=0;j<(n/2)+1;j++)
            cout<<one[j]<<" "; 
         cout<<endl<<n/2<<endl;
         for(int j=0;j<n/2;j++)
            cout<<two[j]<<" "; 
        }
        else
        {
         int i=1;
         while(i<=n)
         {
          if(i%4==1 || i%4==0)
           one.push_back(i);     
          else
           two.push_back(i);
          i++;      
         }
         cout<<n/2<<endl;
         for(int j=0;j<n/2;j++)
            cout<<one[j]<<" "; 
         cout<<endl<<n/2<<endl;
         for(int j=0;j<n/2;j++)
            cout<<two[j]<<" "; 
        }
      }    
    else
    cout<<"NO";  
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long


void toh(int n,int start,int end,int aux)
{
  //base case
  if(n==1){
   cout<<start<<" "<<end<<endl;
   return;
   }     
  toh(n-1,start ,aux, end);
  cout<<start<<" "<<end<<endl;
  toh(n-1,aux,end,start); 
  
}

int main()
{
    int n;
    cin>>n;
    cout<<(pow(2,n)-1)<<endl;
    toh(n,1,3,2); 
    return 0;
}

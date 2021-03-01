#include<iostream>
#include<cmath>
using namespace std;

#define ll long long

int main()
{
    // if x and y input ,a= (2,1) op and b=(1,2) op,then
    //according to condition, x-2a-b = y-a-2b = 0
    //so a=(2y-x)/3 and b=(2x-y)/3 ,and both should be positive ,as op can be applied positive >=0 times 
    int t;
    cin>>t;
    while(t--)
    {
    ll x,y;
    cin>>x>>y;
    if((2*x-y)>=0 && (2*x-y)%3==0 && (2*y-x)%3==0 && (2*y-x)>=0)
      cout<<"YES"<<endl;
    else  
      cout<<"NO"<<endl;
    }    
   return 0; 
}
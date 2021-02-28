#include<iostream>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    int sum=0;
    while(n>=5)
    {
     sum+=n/5;
     n/=5;   
    }
 cout<<sum;
 return 0;   
}
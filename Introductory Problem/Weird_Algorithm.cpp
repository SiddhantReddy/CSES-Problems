#include<iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    while(n!=1)
    {
     cout<<n<<" ";   
     if(n%2!=0)
      n=n*3+1;
     else
      n/=2;
    }
    cout<<1;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
  long long t;
   cin>>t;
   while(t--)
   {
    long long x,y;
    cin>>x>>y;
    if(x>y)
    {
     if(x%2!=0)
     cout<< (x-1)*(x-1)+y;
     else
     cout<<x*x-y+1;

    }
    else
    {
     if(y%2!=0)
     cout<<y*y-x+1 ;
     else
     cout<<(y-1)*(y-1)+x;
    }
    cout<<endl;
   }
   return 0;
   }

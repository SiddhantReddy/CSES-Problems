#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[200001]={0};
    for(int i=1;i<=n-1;i++)
     {
         int temp;
         cin>>temp;
         arr[temp]=-1;
     }
     for(int i=1;i<=n;i++)
     {
      if(!arr[i])
         cout<<i;  
     } 
    return 0;
}
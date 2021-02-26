#include<iostream>
using namespace std;

int main()
{
   int n;
    cin>>n;
    int arr[200001]={0};
    for(int i=0;i<n;i++)
     {
         int temp;
         cin>>temp;
         arr[i]=temp;
     }
     long long move=0;
     for(int i=1;i<n;i++)
     {
      if(arr[i]<arr[i-1])
      {
        move=move+arr[i-1]-arr[i];
        arr[i]=arr[i-1];
      } 
     } 
     cout<<move;
    return 0;
}

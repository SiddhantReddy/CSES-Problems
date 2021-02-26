#include<iostream>
// #include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int max=1,temp=1;
    // char prev=s[0];
    for(int i=1;i<s.length();i++)
    {
     if(s[i]==s[i-1])
     {
      temp++;   
     }
     else
     {
      if(temp>max)
         max=temp;
      temp=1;   
     }
    }
    if(temp>max)
         max=temp;
    cout<<max;
    return 0;
}

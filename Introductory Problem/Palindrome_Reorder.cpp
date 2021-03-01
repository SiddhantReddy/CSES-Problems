#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   string s;
   cin >> s;
   int len = s.length();
   int arr[26] = {0};
   for (char c : s)
      arr[c - 'A']++;
   int count = 0;
   for (int i = 0; i < 26; i++)
   {
      if (arr[i] % 2 != 0)
         count++;
   }
   if (count > 1){
      cout << "NO SOLUTION";
      return 0;
   }
   string t;
   for(int i=0;i<26;i++)
       if(arr[i]& 1^1)
         for(int j=0;j<arr[i]/2;j++)
            t+=(char) ('A'+i);  
   cout<<t;   
   for(int i=0;i<26;i++)
       if(arr[i]& 1)
         for(int j=0;j<arr[i];j++)
            cout<<(char) ('A'+i);  
   reverse(t.begin(),t.end());
   cout<<t;
   return 0;
}
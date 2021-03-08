#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    int n, x;
	cin >> n >> x;
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr.begin(), arr.end());
	int i = 0, j = n - 1;
	while (i < j)
	{
		if (arr[i].first + arr[j].first == x)
		{
			cout << arr[i].second << " " << arr[j].second;
			return 0;
		}
		if (arr[i].first + arr[j].first < x)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
    // int n,sum;cin>>n>>sum;
    // vector<int> a;
    // for(int i=0;i<n;i++)
    //   {int temp;cin>>temp;a.push_back(temp);}
    
    // unordered_map<int ,int> m;
    
    // for(int i=0;i<n;i++)
    // {
    //  if(m.count(sum-a[i]))
    //  {
    //   cout<<m[sum-a[i]]<<" "<<i+1;
    //   return 0;  
    //  }
    //  m[a[i]]=i+1;
    // }
    // cout<<"IMPOSSIBLE";
    // return 0;
}

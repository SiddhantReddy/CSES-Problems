#include <bits/stdc++.h>
using namespace std;

#define ll long long

void permute(string a, int l, int h)
{
    //base case
    if (l == h)
        cout << a << endl;
    else
    {
        //permutation
        for (int i = l; i <= h; i++)
        {
            //swapping
            swap(a[l], a[i]);
            //recursion
            permute(a, l + 1, h);
            //backtrack
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    permute(n, 0, len - 1);
    return 0;
}

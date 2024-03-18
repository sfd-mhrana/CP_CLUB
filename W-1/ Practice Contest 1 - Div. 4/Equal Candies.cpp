#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int lNum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        lNum = min(lNum, arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (arr[i] - lNum);
    }
    cout << sum << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
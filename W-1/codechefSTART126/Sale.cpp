#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum[n + 1] = {0};
    ll greaterI = INT_MIN;
    ll grater = INT_MIN;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum[i + 1] = sum[i] + arr[i];
        grater = max(arr[i], grater);
        if (grater == arr[i])
            greaterI = i;
    }
    cout << sum[greaterI] + (arr[greaterI] * 2) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
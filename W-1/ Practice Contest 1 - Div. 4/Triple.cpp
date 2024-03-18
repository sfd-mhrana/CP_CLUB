#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll arr[n + 2] = {0};
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        arr[k]++;
    }

    bool find = false;
    for (ll i = 0; i <= n; i++)
    {
        if (arr[i] >= 3)
        {
            find = true;
            cout << i << endl;
            break;
        }
    }
    if (!find)
    {
        cout << -1 << endl;
    }
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
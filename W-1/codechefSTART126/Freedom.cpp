#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll a, b, c;
        for (ll j = i + 1; j <= n; j++)
        {
            a = arr[i] - arr[j];
            b = arr[i] + arr[j];
            c = arr[i] * arr[j];
            if (a - b == b - c)
                res++;
        }
    }
    cout<<res<<endl;
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
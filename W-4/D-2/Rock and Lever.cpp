#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        ll msb = log2(arr[i]);
        mp[msb]++;
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll msb = log2(arr[i]);
        ans += (mp[msb] - 1);
    }

    cout << ans/2 << endl;
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
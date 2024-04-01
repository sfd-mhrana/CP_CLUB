#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    map<ll, ll> mp;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    vector<pair<ll, ll>> b;
    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        b.push_back({it->first, it->second});
    }

    ans = b[0].second;
    for (ll i = 1; i < b.size(); i++)
    {
        if (b[i].first + 1 == b[i - 1].first)
        {
            ans = ans + max(b[i].second - b[i - 1].second, 0ll);
        }
        else
        {
            ans = ans + b[i].second;
        }
    }

    cout << ans << "\n";
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
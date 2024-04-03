#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

vector<vector<ll>> adj;
vector<ll> value;

ll dfs(ll at, ll from)
{
    ll count = 0;
    for (auto child : adj[at])
    {
        if (child != from)
        {
            count += dfs(child, at);
        }
    }
    if (count == 0 && adj[at].size() == 1)
    {
        count++;
    }
    value[at] = count;
    return count;
}

ll solve()
{
    ll n;
    cin >> n;
    adj.resize(n + 1);
    value.resize(n + 1, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1);
    ll q;
    cin >> q;
    for (ll i = 1; i <= q; i++)
    {
        ll u, v;
        cin >> u >> v;
        ll ans = ((ll)value[u] * (ll)value[v]);
        cout << ans << endl;
    }
    adj.clear();
    value.clear();
    return 0;
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
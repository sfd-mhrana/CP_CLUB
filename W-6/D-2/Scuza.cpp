#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    vector<pair<ll, ll>> query(q);

    vector<ll> ans(q);
    ll sum = 0;
    for (ll i = 0; i < q; i++)
    {
        cin >> query[i].first;
        query[i].second = i;
    }

    sort(query.begin(), query.end());
    
    ll pos = 0;
    for (ll i = 0; i < q; i++)
    {
        while (pos < n && v[pos] <= query[i].first)
        {
            sum += v[pos];
            pos++;
        }
        ans[query[i].second] = sum;
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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
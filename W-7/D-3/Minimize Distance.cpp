#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll ans = 0, k, n;
    cin >> n >> k;
    vector<ll> pos, neg;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0)
            pos.push_back(x);
        else if (x < 0)
            neg.push_back(-x);
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    for (ll i = pos.size() - 1; i >= 0; i -= k)
        ans += 2 * pos[i];
    for (ll i = neg.size() - 1; i >= 0; i -= k)
        ans += 2 * neg[i];

    ans -= max((pos.empty() ? 0 : pos.back()), (neg.empty() ? 0 : neg.back()));
    cout << ans << endl;
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
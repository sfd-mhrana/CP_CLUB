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
    int n;
    cin >> n;

    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll curr;
        cin >> curr;
        mp[curr] += 1;
    }

    ll tot[200005] = {0};
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll mul = i;
        while (mul <= n)
        {
            tot[mul] += mp[i];
            mul += i;
        }
        ans = max(ans, tot[i]);
    }
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;
const ll N = 1e6 + 5;

map<ll, ll> mp;
ll a[N], b[N];
void solve()
{
    ll n, mx = 0;
    cin >> n;

    mp.clear();
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    for (auto x : mp)
        for (auto k : mp)
            if (gcd(k.first, x.first) == 1)
                mx = max(mx, (k.second + x.second));
    if (mx)
        cout << mx << endl;
    else
        cout << -1 << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
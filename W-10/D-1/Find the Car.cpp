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
#define all(v) v.begin(),v.end()
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(k + 1);
    fl(i, k) cin >> a[i + 1];
    vector<ll> b(k + 1);
    fl(i, k) cin >> b[i + 1];

    while (q--)
    {
        ll d;
        cin >> d;
        ll res = lower_bound(all(a), d) - a.begin();

        if (d != a[res])
            cout << b[res - 1] + ((d - a[res - 1]) * (b[res] - b[res - 1])) / (a[res] - a[res - 1]) << ' ';
        else
            cout << b[res] << ' ';
    }
    cout<<endl;
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
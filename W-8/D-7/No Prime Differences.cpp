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

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a[n + 1];
    ll value = 1;
    for (ll i = 1; i <= n; i++)
    {
        a[i].resize(m + 1);
        for (ll j = 1; j <= m; j++)
        {
            a[i][j] = value;
            value++;
        }
    }

    for (ll i = 2; i <= n; i += 2)
    {
        for (ll j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (ll i = 1; i <= n; i += 2)
    {
        for (ll j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
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
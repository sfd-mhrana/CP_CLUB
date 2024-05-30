#include <bits/stdc++.h>
using namespace std;

#define ll int
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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];
        
    ll l = -1, r = -1;
    for (ll i = 1, c = 0; i <= n; ++i)
        if (a[i] == a[1])
        {
            c++;
            if (c == k)
            {
                l = i;
                break;
            }
        }
    for (ll i = n, c = 0; i >= 1; --i)
        if (a[i] == a[n])
        {
            c++;
            if (c == k)
            {
                r = i;
                break;
            }
        }
    if (l != -1 && r != -1 && l <= r)
        cout << "YES" << endl;
    else if (l != -1 && r != -1 && a[1] == a[n])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
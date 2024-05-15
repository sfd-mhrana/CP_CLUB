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
void getPrime(ll p, map<ll, ll> &ma)
{
    while (p % 2 == 0)
    {
        ma[2]++;
        p /= 2;
    }
    for (ll i = 3; i <= sqrt(p); i++)
    {
        while (p % i == 0)
        {
            ma[i]++;
            p /= i;
        }
    }
    if (p > 1)
        ma[p]++;
}
void solve()
{
    map<ll, ll> ma;
    ll n, b, f = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> b;
        getPrime(b, ma);
    }
    map<ll, ll>::iterator it;
    for (it = ma.begin(); it != ma.end(); it++)
    {
        if (it->second % n != 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
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
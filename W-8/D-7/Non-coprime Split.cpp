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

ll getPrime(ll n)
{
    if (n % 2 == 0)
        return 2;

    for (ll i = 3; i <= sqrt(n); i = i + 2)
        if (n % i == 0)
            return i;

    if (n > 2)
        return n;
}

void solve()
{
    ll l, r;
    cin >> l >> r;

    if (r <= 3)
        cout << -1 << endl;
    else
    {
        if (l < r)
        {
            if (r % 2 != 0)
                r--;
            cout << 2 << " " << r - 2 << endl;
        }
        else
        {
            ll prime = getPrime(l);
            if (prime == l)
                cout << -1 << endl;
            else
                cout << prime << " " << l - prime << endl;
        }
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
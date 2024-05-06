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
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void solve()
{
    ll mod = 1e9 + 7;
    ll n, k;
    cin >> n >> k;
    if (isPowerOfTwo(k))
        cout << powermod(n, ceil(log2(k)), mod) << endl;
    else
    {
        ll c = 0;
        while (k > 0)
        {
            if (k == 1)
            {
                c++;
                k = 0;
            }
            else if (k == 2)
            {
                c += n % mod;
                k = 0;
            }
            else if (k == 3)
            {
                c += (n + 1) % mod;
                k = 0;
            }
            else
            {
                ll x = pow(2, floor(log2(k)));
                c += powermod(n, floor(log2(k)), mod);
                k -= x;
            }
        }
        cout << c % mod << endl;
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
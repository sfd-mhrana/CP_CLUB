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
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = n + 1;; i++)
    {
        bool find = true;
        for (ll j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                find = false;
                break;
            }

        if (find)
        {
            a.push_back(i);
            break;
        }
    }

    for (ll i = a.back() + n;; i++)
    {
        bool find = true;
        for (ll j = 2; j * j <= i; j++)
            if (i % j == 0)
            {
                find = false;
                break;
            }

        if (find)
        {
            a.push_back(i);
            break;
        }
    }

    cout << min(a[0] * a[1], a[0] * a[0] * a[0]) << endl;
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
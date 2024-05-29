#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, s, n) for (ll i = s; i < n; i++)
#define rfl(i, n, s) for (int i = n; i >= s; i--)
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
    vinll(arr, n);
    ll ans=0, prv=0;
    fl(i, 1, n) if (arr[i] <= arr[prv])
    {
        ans += max(arr[i], arr[prv]) * (i - prv);
        prv = i;
    }
    if (prv != n - 1)
    {
        ll prev = n - 1;
        rfl(i, n - 2, prv + 1)
        {
            if (arr[i] <= arr[prev])
            {
                ans += max(arr[i], arr[prev]) * (prev - i);
                prev = i;
            }
        }
        if (prev != prv)
            ans += max(arr[prev], arr[prv]) * (prev - prv);
    }
    cout << ans << endl;
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
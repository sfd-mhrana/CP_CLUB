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
}

int main()
{
    fastread();

    ll n;
    cin >> n;

    ll mx = 0;
    vector<ll> v(n);
    fl(i, n)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    ll gc = 0;
    ll sum = 0;
    for (auto x : v)
    {
        gc = gcd(gc, mx - x);
        sum += (mx - x);
    }
    ll ans = (gc == 0 ? 0 : sum / gc);
    cout << ans << " " << gc << endl;

    return 0;
};
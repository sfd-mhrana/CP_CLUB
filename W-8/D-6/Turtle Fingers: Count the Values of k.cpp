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
    ll a, b, l;
    cin >> a >> b >> l;
    ll ans = 0;
    ll x = 0;
    if (a == b)
    {
        ll y = 1;
        while (l % b == 0)
        {
            l /= b;
            y++;
        }
        cout << y << "\n";
        return;
    }
    set<int> k;
    while (true)
    {
        if (int(pow(a, x)) > l)
            break;
        if ((l % int(pow(a, x))) != 0)
            break;
        ll curr = l / int(pow(a, x));
        k.insert(curr);
        while (curr % b == 0)
        {
            curr /= b;
            k.insert(curr);
        }
        x++;
    }
    cout << k.size() << "\n";
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
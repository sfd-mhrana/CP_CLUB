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

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    fastread();
    ll x;
    cin >> x;
    ll ans;
    for (ll i = 1; i * i <= x; i++)
        if (x % i == 0 && lcm(i, x / i) == x)
        {
            ans = i;
        }
    cout << ans << " " << x / ans << endl;
    return 0;
};
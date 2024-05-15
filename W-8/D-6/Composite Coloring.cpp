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

vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve()
{
    ll n;
    cin >> n;
    vector<ll> rem(n);
    vinll(v,n);
    ll cnt = 0;
    for (auto x : prime)
    {
        bool ok = false;
        for (ll i = 0; i < n; i++)
        {
            if (rem[i] == 0 && v[i] % x == 0)
            {
                if (!ok)
                {
                    ok = true;
                    ++cnt;
                }
                rem[i] = cnt;
            }
        }
    }
    cout << cnt << endl;
    for (auto x : rem)
    {
        cout << x << " ";
    }
    cout << endl;
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
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
    vinll(arr, n);
    vector<ll> freq(n + 5);
    for (ll i = 0; i < n; i++)
        freq[arr[i]]++;
        
    bool once = false;
    ll ans = -1;
    for (ll i = 0; i < n + 5; i++)
    {
        if (freq[i] == 0)
        {
            ans = i;
            break;
        }
        if (freq[i] == 1)
        {
            if (once)
            {
                ans = i;
                break;
            }
            once = true;
        }
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
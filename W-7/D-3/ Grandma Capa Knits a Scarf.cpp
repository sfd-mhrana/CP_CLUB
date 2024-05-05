#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    ll ans = 1e9;
    for (ll i = 'a'; i <= 'z'; i++)
    {
        ll change = 0;
        ll l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] != s[r])
            {
                if (s[l] == i)
                {
                    l++;
                    change++;
                }
                else if (s[r] == i)
                {
                    r--;
                    change++;
                }
                else
                {
                    change = 1e9;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        ans = min(ans, change);
    }
    if (ans == 1e9)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
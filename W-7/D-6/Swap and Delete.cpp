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

void solve()
{
    string s;
    cin >> s;
    ll n = (ll)s.size();
    ll ans = 0;
    ll count[2] = {0, 0};
    for (ll i = 0; i < n; i++)
        count[s[i] - '0']++;
    for (ll i = 0; i < n; i++)
    {
        if (count[!(s[i] - '0')] > 0)
            count[!(s[i] - '0')]--;
        else
        {
            ans = n - i;
            break;
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
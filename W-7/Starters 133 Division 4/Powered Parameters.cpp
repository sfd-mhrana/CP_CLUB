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
    ll n;
    cin >> n;

    vinll(arr, n);

    map<ll, ll> mp;
  
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 0)
        {
            ans += mp[arr[i]];
            continue;
        }
        else
        {
            ll count = 0;
            for (ll j = 0; j < n; j++)
                if (pow(arr[i], j + 1) <= arr[j])
                    count++;
            mp[arr[i]] = count;
            ans += count;
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
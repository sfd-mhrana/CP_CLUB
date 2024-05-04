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
    cin >> n;
    vinll(arr, n);
    
    ll ans = 1e9;
    for (ll i = 0; i < n; i++)
    {
        ll cur = 0;
        if (i > 0)
            cur = max(cur, abs(arr[i] - arr[i - 1]));
        if (i + 1 < n)
            cur = max(cur, abs(arr[i] - arr[i + 1]));
        ans = min(ans, cur);
    }

    cout << ans << endl;
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
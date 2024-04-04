#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> vt(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vt[i];
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    ll ans = vt[n - 1] - vt[0];
    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, vt[i] - vt[0]);
    }

    for (ll i = 0; i < n - 1; i++)
    {
        ans = max(ans, vt[n - 1] - vt[i]);
    }

    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, vt[i - 1] - vt[i]);
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
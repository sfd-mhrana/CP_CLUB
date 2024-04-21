#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> v(n + 1);

    long long ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] >= a - 1)
            ans += a - 1;
        else
            ans += v[i];
    }
    ans += b;
    cout << ans << '\n';
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
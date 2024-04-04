#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;

    ll a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n, greater<ll>());
    sort(b, b + m, greater<ll>());
    ll ans = 0;
    for (int i = 0; i < min(m, n); i++)
    {
        ans += min(a[i], b[i] * h);
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
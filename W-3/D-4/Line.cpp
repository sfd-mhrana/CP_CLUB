#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> ch(n, 0);
    ll sum(0);
    for (ll p = 0; p < n; p++)
    {
        ll cur = (s[p] == 'L') ? p : n - p - 1;
        ll mx = max(p, n - p - 1);
        sum += cur;
        ch[p] = mx - cur;
    }

    sort(ch.rbegin(), ch.rend());

    for (ll p = 0; p < n; p++)
    {
        sum += ch[p];
        cout << sum << " ";
    }
    cout << endl;
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
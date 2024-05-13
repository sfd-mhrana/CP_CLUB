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
    ll l, v1, v2;
    cin >> l >> v1 >> v2;

    ll v1r = l % v1 != 0 ? (l / v1) + 1 : (l / v1);
    ll v2r = l % v2 != 0 ? (l / v2) + 1 : (l / v2);

    if (v1r == v2r)
        cout << -1 << endl;
    else
    {
        v1r--;
        cout << v1r - v2r << endl;
    }
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
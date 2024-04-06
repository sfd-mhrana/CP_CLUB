#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

ll canXorEqualZero(const vector<ll> &a)
{
    for (ll x = 0; x <= 256; ++x)
    {
        ll xorResult = 0;
        for (ll ai : a)
        {
            ll bi = ai ^ x;
            xorResult ^= bi;
        }
        if (xorResult == 0)
        {
            return x;
        }
    }
    return -1;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll ans = 0;
    for (auto &it : v)
    {
        cin >> it;
        ans ^= it;
    }
    if (n % 2 == 0)
    {
        if (ans == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    else
    {
        cout << ans << "\n";
    }
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
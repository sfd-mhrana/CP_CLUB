#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;

    ll c = 0, v = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (num <= q)
            c++;
        else
            c = 0;

        if (c >= k)
            v += c - k + 1;
    }

    cout << v << endl;
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
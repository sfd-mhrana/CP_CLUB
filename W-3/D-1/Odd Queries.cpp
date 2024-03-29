#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, q;
    cin >> n >> q;

    ll arr[n];
    ll preQ[n + 2] = {0};

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        preQ[i + 1] = arr[i] + preQ[i];
    }

    ll sum = preQ[n];
    for (ll i = 0; i < q; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll exS, lS;
        ll rS = preQ[r];

        if (l == 1)
        {
            exS = sum - rS;
        }
        else
        {
            lS = preQ[l - 1];
            exS = sum - (rS - lS);
        }
        cout << ((exS + ((r - l + 1) * k)) % 2 == 1 ? "YES" : "NO") << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, x, l = 1;
    cin >> n >> x;
    vector<ll> coral_ht(n);
    for (ll i = 0; i < n; i++)
        cin >> coral_ht[i];

    ll r = 1e10;
    while (l < r - 1)
    {
        ll total_water = 0;
        ll mid_ht = l + (r - l) / 2;
        for (ll i = 0; i < n; i++)
            if (coral_ht[i] < mid_ht)
                total_water += (mid_ht - coral_ht[i]);
        if (total_water > x)
            r = mid_ht;
        else
            l = mid_ht;
    }
    cout << l << endl;
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
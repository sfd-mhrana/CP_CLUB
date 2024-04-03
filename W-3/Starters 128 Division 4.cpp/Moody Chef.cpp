#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;

    ll count = 0;
    ll hi = 0;
    ll lo = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (num >= l && num <= r)
            count++;
        else
            count--;
        hi = max(hi, count);
        lo = min(lo, count);
    }

    cout <<hi<<" "<<lo<<endl;
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
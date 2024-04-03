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
    if (n == 1)
    {
        ll num;
        cin >> num;
        cout << 0 << endl;
        return;
    }
    else
    {
        ll hi = INT_MIN;
        ll lw = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            if (num != 0)
            {
                hi = max(hi, num);
                lw = min(lw, num);
            }
        }
        cout << (hi - lw) << endl;
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
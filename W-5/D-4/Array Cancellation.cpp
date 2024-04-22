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

    ll avail(0), cnt(0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > 0)
            avail += x;
        else if (x < 0)
        {
            if (x + avail > 0)
                avail += x;
            else
            {
                x += avail;
                cnt -= x;
                avail = 0;
            }
        }
    }
    cout << cnt << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll x;
    cin >> x;

    ll ans = 1;
    bool check = false;
    for (ll i = (ll)log2(x) - 1; i >= 0; i--)
    {
        if ((x & 1 << i))
            check = true;
        else if (check)
            ans = ans * 2;
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
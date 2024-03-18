#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    char r;
    cin >> n >> r;

    string s;
    cin >> s;
    s += s;

    ll res = LLONG_MIN;
    ll dis = 0;
    for (ll i = 2 * n - 2; i >= 0; i--)
    {
        if (s[i] == 'g')
            dis = 0;
        if (s[i] == r)
            res = max(res, dis);
        dis++;
    }

    cout << res << endl;
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
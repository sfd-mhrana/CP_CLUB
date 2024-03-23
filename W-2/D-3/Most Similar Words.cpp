#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, m;
    cin >> n >> m;

    string arr[n];
    ll ans = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        string ai = arr[i];
        for (ll j = i + 1; j < n; j++)
        {
            string aj = arr[j];
            ll dis = 0;
            for (ll k = 0; k < m; k++)
            {
                dis += abs(ai[k] - aj[k]);
            }

            ans = min(ans, dis);
        }
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
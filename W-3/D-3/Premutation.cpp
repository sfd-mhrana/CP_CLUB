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
    ll arr[n][n - 1];
    map<ll, ll> m;
    ll c;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
            if (j == n - 2)
            {
                if (m[arr[i][j]] >= 1)
                    c = arr[i][j];

                m[arr[i][j]]++;
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (arr[i][n - 2] != c)
        {
            for (ll j = 0; j < n - 1; j++)
            {
                cout << arr[i][j] << " ";
            }
            break;
        }
    }
    cout << c << endl;
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
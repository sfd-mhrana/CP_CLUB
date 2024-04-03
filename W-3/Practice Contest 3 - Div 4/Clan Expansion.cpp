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

    map<ll, ll> mp;
    ll maxNum = INT_MIN;
    ll maxCo = INT_MIN;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if (mp[arr[i]] > maxCo)
        {
            maxCo = mp[arr[i]];
            maxNum = arr[i];
        }
    }

    if (maxCo == 1)
    {
        cout << arr[n / 2] << " " << n / 2 << endl;
    }
    else
    {
        n -= maxCo;
        ll cv = (n / maxCo) + (n % maxCo != 0);
        cout << maxNum << " " << cv << endl;
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
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

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<ll>());
    ll ans = 1;
    ll xoro = arr[0];
    ll i = 0;
    ll j = n - 1;
    while (i < j)
    {
        if ((xoro) >= arr[j])
        {
            xoro = (xoro ^ arr[j]);
            j--;
        }
        else
        {
            ans++;
            xoro = arr[i];
            i++;
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
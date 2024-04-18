#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{

    ll a[1005];
    ll n, m, k;
    cin >> n >> m >> k;

    for (ll i = 0; i < m + 1; i++)
        cin >> a[i];

    ll friends = 0;

    for (ll i = 0; i < m; i++)
    {
        ll t = 0;
        for (ll j = 0; j < n; j++)
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
                t++;
        if (t <= k)
            friends++;
    }

    cout << friends << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
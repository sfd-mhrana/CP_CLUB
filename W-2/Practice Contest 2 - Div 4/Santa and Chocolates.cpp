#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        sum += num;
    }
    if (sum < n)
    {
        cout << "NO" << endl;
        return;
    }

    ll res = sum / n;
    ll remain = sum % n;
    if (remain == 0)
        cout << "YES" << endl;
    else if (k >= 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
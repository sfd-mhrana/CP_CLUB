#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

ll InvarsecCount(vector<ll> a, ll n)
{
    ll res = 0, one = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
            one++;
        else
            res += one;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    vinll(arr, n);

    ll ans = InvarsecCount(arr, n);
    ll id = -1;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
            id = i;
            break;
        }
    }
    ans = max(ans, InvarsecCount(arr, n));
    if (id != -1)
        arr[id] = 0;
    for (ll i = n - 1; i >= 0; i--)
        if (arr[i] == 1)
        {
            arr[i] = 0;
            break;
        }
    ans = max(ans, InvarsecCount(arr, n));
    cout << ans << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;

    vinll(arr, n);
    sort(arr.begin(), arr.end(), greater<ll>());

    ll ans = 0;
    ll mid = (n % 2 == 0) ? n / 2 : (n / 2) + 1;
    fl(i, n) if (i < mid)
        ans += arr[i];
    else ans -= arr[i];

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
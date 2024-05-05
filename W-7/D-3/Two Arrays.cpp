#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;

    vinll(arr, n);
    vinll(brr, n);

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    fl(i, n)
    {
        ll d = brr[i] - arr[i];
        if (d == 1 || d == 0)
            continue;
        else
            pn bye;
    }
    py
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
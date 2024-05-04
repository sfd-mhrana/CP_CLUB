#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    vinll(arr, n);


    ll brr[n];
    ll maxO = 0;
    bool p = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> brr[i];
        maxO = max(maxO, arr[i] - brr[i]);
    }

    for (ll i = 0; i < n; i++)
        if (arr[i] - maxO < brr[i] && brr[i] != 0)
            p = 0;

    if (p)
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
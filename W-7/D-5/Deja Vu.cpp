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

void solve()
{
    ll n, q;
    cin >> n >> q;

    vinll(arr, n);
    vinll(qrr, q);

    set<ll> hs;
    for (ll i = 0; i < q; i++)
    {
        if (hs.count(qrr[i]))
            continue;
        hs.insert(qrr[i]);
        for (ll j = 0; j < n; j++)
        {
            if (arr[j] % (1 << qrr[i]) == 0)
                arr[j] += (1 << (qrr[i] - 1));
        }
    }

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
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
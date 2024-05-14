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
    ll n, x = 0;
    cin >> n;

    vinll(arr, n);
    bool ok = false;
    fl(i, n)
    {
        ll in = i + 2;
        if (arr[i] % in != 0)
            x++;
        else
        {
            ok = false;
            for (int j = 1; j <= x; j++)
                if (arr[i] % (in - j) != 0)
                {
                    x++;
                    ok = true;
                    break;
                }
            if (ok == false)
            {
                pn return;
            }
        }
    }
    py
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
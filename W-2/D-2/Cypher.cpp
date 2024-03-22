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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        ll mv;
        cin >> mv;
        ll up = 0;
        for (ll j = 0; j < mv; j++)
        {
            char UD;
            cin >> UD;
            if (UD == 'D')
            {
                if (a[i] == 9)
                {
                    a[i] = 0;
                }
                else
                {
                    a[i]++;
                }
            }
            else
            {
                if (a[i] == 0)
                {
                    a[i] = 9;
                }
                else
                {
                    a[i]--;
                }
            }
        }
        cout << a[i] << " ";
    }
    cout << endl;
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
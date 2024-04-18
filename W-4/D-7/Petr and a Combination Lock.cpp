#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, sum;
    cin >> n;

    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    bool find = false;
    for (ll i = 0; i < (1 << n); i++)
    {
        sum = 0;
        for (ll j = 0; j < n; j++)
        {
            if ((1 << j) & i)
                sum += a[j];
            else
                sum -= a[j];
        }
        if (sum % 360 == 0)
        {
            find = true;
            break;
        }
    }
    if (find)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
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
    ll prev = INT_MIN;
    bool isOK = false;
    for (ll i = 0; i < n; i++)
    {

        ll num;
        cin >> num;
        if (i == 0)
            prev = num;
        else
        {
            if (abs(prev - num) == 2)
            {
                isOK = true;
            }
        }
    }

    if (isOK)
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
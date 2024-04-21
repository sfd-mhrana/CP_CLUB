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

    ll ar[n], na = 0, sum = 0, mn = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        na += (ar[i] <= 0);
        ar[i] = abs(ar[i]);
        sum += ar[i];
        mn = min(mn, ar[i]);
    }
    if (na % 2)
        sum -= (2 * mn);
    cout << sum << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    ll n, m, pairs(0);

    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    ll b[m];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 1000;
                pairs++;
                break;
            }

    cout << pairs << endl;
    return 0;
};
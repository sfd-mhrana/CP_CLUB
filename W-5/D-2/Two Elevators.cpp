#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll first = a - 1;
    ll second = 0;

    if (b > c)
        second = b - 1;
    else
        second = (c - b) + (c - 1);

    if (second > first)
        cout << 1 << endl;
    else if (second < first)
        cout << 2 << endl;
    else
        cout << 3 << endl;
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
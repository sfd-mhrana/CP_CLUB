#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll a, b;
    cin >> a >> b;
    a = b - a + 10;

    if (a <= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (a % 3 == 0)
            cout << a / 3 << endl;
        else
            cout << (a / 3) + 1 << endl;
    }
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
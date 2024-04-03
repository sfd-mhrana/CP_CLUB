#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    string a, b;
    cin >> n >> a >> b;
    ll ac = 0, bc = 0;
    for (ll i = 0; i < n; i++)
    {
        if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R'))
            ac++;
        else if ((a[i] == 'S' && b[i] == 'R') || (a[i] == 'P' && b[i] == 'S') || (a[i] == 'R' && b[i] == 'P'))
            bc++;
    }
    if (ac > bc)
    {
        cout << 0 << endl;
    }
    else
    {

        ll cv = ((bc - ac) / 2)+ ((bc - ac) % 2 != 0);
        ll cm = cv + ac;
        ll bm = (bc + ac) - cm;
        if (cm == bm)
            cout << cm - ac + 1 << endl;
        else
            cout << cm - ac << endl;
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
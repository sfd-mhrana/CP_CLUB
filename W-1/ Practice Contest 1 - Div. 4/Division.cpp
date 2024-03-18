#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll x;
    cin >> x;
    if (x <= 1399)
    {
        cout << "Division 4" << endl;
    }
    else if (x <= 1599)
    {
        cout << "Division 3" << endl;
    }
    else if (x <= 1599)
    {
        cout << "Division 3" << endl;
    }
    else if (x <= 1899)
    {
        cout << "Division 2" << endl;
    }
    else
    {
        cout << "Division 1" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
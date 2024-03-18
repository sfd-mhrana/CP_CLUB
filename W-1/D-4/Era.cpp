#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        ll k;
        cin >> k;
        if (k > i)
        {
            if (k - i - count > 0)
                count += (k - i - count);
        }
    }
    cout << count << endl;
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
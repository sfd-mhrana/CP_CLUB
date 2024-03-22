

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll b[n];
        b[0] = a[0];
        for (ll i = 1; i < n; i++)
            b[i] = a[i] + b[i - 1];
        ll sum = b[n - 1];
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if ((a[i]) > sum)
                    sum = a[i];
            }
            else
            {
                if ((b[i - 1] + a[i] 2) > sum)
                    sum = b[i - 1] + a[i] 2;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
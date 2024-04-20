#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    int n;
    cin >> n;
    ll c;
    cin >> c;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += (i + 1);
    }

    sort(a.begin(), a.end());
    int ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] > c)
            break;
        sum += a[i];
        ans++;
    }
    cout << ans << endl;
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
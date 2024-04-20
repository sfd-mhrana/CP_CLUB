#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, x, l, r, n, m, mx, mn, sum, val, ans, a[100001];
    cin >> n >> l >> r >> x;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    ans = 0;
    for (i = 0; i < (1 << n); i++)
    {
        mx = -1;
        mn = 1000000;
        sum = 0;
        for (j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
            }
        }
        if (l <= sum && sum <= r && (mx - mn) >= x)
            ans++;
    }
    cout << ans << endl;
    return 0;
};
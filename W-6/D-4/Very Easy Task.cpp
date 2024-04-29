#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define ain(v, n)              \
    ll v[n];                   \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](ll t)
    {
        if (t < min(x, y))
            return false;
        int cnt = 1;
        t -= min(x, y);
        cnt += t / x + t / y;

        return cnt >= n;
    };

    int l = 0, r = max(x, y) * n, mid;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
};
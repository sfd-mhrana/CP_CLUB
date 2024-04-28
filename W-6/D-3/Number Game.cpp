#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, ans;
    cin >> n;
    ll arr[n];
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];
    
    sort(arr + 1, arr + n + 1);
    for (ans = (n + 1) / 2; ans; ans--)
    {
        ll f = 1;
        for (ll i = 1; i <= ans && f; i++)
            if (arr[i + ans - 1] > i)
                f = 0;
        if (f)
            break;
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
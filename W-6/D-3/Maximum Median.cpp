#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return;

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    int med = n / 2;
    ll ans = arr[med];
    ll low = 0, high = 1e18 + 90;
    while (low <= high)
    {
        ll mid = low + ((high - low) >> 1);
        ll sum = 0;
        for (int i = med; i < n; i++)
        {
            if (arr[i] <= mid)
                sum += (mid - arr[i]);
            if (sum > k)
                break;
        }

        if (sum <= k)
        {
            ans = max(ans, mid);
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
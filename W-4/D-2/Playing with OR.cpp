#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = 0;
    int ans = 0;
    for (int i = 0; i < n - k + 1; i++)
    {
        for (int j = i; j < i + k; j++)
        {
            // Any odd item from a array it goes to make array bitwise or odd.
            if (arr[j] % 2 != 0)
            {
                x = 1;
                break;
            }
        }
        if (x == 1)
            ans++;
        x = 0;
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
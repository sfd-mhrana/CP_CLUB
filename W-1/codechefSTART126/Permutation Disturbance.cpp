#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll swapCount = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            if (i + 1 == n)
            {
                while (arr[i] == i + 1 && i > 0)
                {
                    ll num = arr[i];
                    arr[i] = arr[i - 1];
                    arr[i - 1] = num;
                    i--;
                    swapCount++;
                }
            }
            else
            {
                while (arr[i] == i + 1 && i < n - 1)
                {
                    ll num = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = num;
                    i++;
                    swapCount++;
                }
            }
        }
    }
    cout << swapCount << endl;
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
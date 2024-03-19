#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    ll arr1[n], arr2[m];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    ll arr[m + 1] = {0};
    ll j = 0;
    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
        ll count = 0;
        while (j < n && arr1[j] < arr2[i])
        {
            count++;
            j++;
        }
        arr[i + 1] = arr[i] + count;
    }

    for (ll i = 1; i <= m; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
};
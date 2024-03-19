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
    ll arr[n], arr2[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    ll k = 0, j = 0;
    ll totalIndex = n + m - 2;
    while (k < n && j < m)
    {
        if (arr[k] <= arr2[j])
        {
            cout << arr[k] << " ";
            k++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
        }
        totalIndex++;
    }

    while (k < n)
    {
        cout << arr[k] << " ";
        k++;
        totalIndex++;
    }
    while (j < m)
    {
        cout << arr2[j] << " ";
        j++;
        totalIndex++;
    }

    return 0;
};
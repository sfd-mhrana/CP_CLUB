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

    ll count = 0;
    ll prev = INT_MIN;
    ll prevC = 0;
    ll j = 0;

    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
        if (arr2[i] == prev && prev != INT_MIN)
        {
            count += prevC;
            j++;
        }
        else
        {
            prev = arr2[i];
            prevC = 0;
            for (j = 0; arr1[j] <= arr2[i]; j++)
            {
                if (arr2[i] == arr1[j])
                {
                    count++;
                    prevC++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
};
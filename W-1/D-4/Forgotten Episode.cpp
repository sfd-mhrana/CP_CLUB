#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll arr[t + 1] = {0};

    for (ll i = 0; i < t; i++)
    {
        ll in;
        cin >> in;
        arr[in] = 1;
    }

    for (ll i = 1; i <= t; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
};
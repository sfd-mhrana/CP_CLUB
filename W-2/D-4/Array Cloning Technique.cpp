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

    unordered_map<ll, ll> elementCount;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        elementCount[arr[i]]++;
    }

    ll highestDuplicate = 0, maxCount = 0;
    for (auto it = elementCount.begin(); it != elementCount.end(); ++it)
    {
        if (it->second > maxCount)
        {
            highestDuplicate = it->first;
            maxCount = it->second;
        }
    }

    ll res = n - maxCount;
    
    ll ans = res;
    while (res > 0)
    {
    }
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
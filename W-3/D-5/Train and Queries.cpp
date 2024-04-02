#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    string line;
    getline(cin, line);

    ll n, k;
    cin >> n >> k;

    map<ll, vector<ll>> mp;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]].push_back(i);
    }

    for (ll i = 0; i < k; i++)
    {
        ll aj, bj;
        cin >> aj >> bj;
        if (mp[aj].size() && mp[bj].size())
        {
            if (mp[aj][0] < mp[bj][mp[bj].size() - 1])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
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
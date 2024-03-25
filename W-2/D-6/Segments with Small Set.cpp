#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> freq;
    int distinct = 0, le = 0;
    int l = 0, r = 0;
    for (; r < n; ++r)
    {
        if (freq[arr[r]] == 0)
        {
            distinct++;
        }
        freq[arr[r]]++;
        while (distinct > k)
        {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0)
            {
                distinct--;
            }
            l++;
        }
        le += r - l + 1;
    }

    cout << le << endl;

    return 0;
};
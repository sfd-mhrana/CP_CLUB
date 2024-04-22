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

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    for (ll i = 0; i < k; i++)
    {
        ll num;
        cin >> num;
        ll l = 0, r = n - 1;
        ll index = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (num >= arr[mid])
            {
                index = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << index + 1 << endl;
        // auto index=upper_bound(arr.begin(), arr.end(), num);
        // cout<<index-arr.begin()<<endl;
    }

    return 0;
};
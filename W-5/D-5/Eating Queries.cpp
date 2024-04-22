#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<ll>());

    vector<ll> preQ(n);
    preQ[0] = arr[0];
    for (int i = 1; i < n; i++)
        preQ[i] = preQ[i - 1] + arr[i];

    while (q--)
    {
        ll num;
        cin >> num;
        int l = 0, r = n - 1, index = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (preQ[mid] >= num)
            {
                index = mid + 1;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << index << endl;
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
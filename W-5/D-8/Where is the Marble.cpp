#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, q;
    ll tCase = 1;
    while (cin >> n >> q, n || q)
    {
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        cout << "CASE# " << tCase++ << ":" << endl;
        while (q--)
        {
            ll value;
            cin >> value;
            auto it = lower_bound(arr.begin(), arr.end(), value);
            if (it == arr.end() || *it != value)
                cout << value << " not found" << endl;
            else
                cout << value << " found at " << (it - arr.begin()) + 1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
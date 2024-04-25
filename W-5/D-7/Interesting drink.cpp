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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll key;
        cin >> key;
        ll l = 0, r = n - 1, mid, index = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key >= a[mid])
            {
                index = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << index + 1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
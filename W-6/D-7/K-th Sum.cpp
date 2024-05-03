#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);          \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

ll findKthSum(vector<ll> &a, vector<ll> &b, const ll k)
{
    sort(b.begin(), b.end());
    auto hasLessThanK = [&a, &b, k](ll x)
    {
        ll cnt = 0;
        for (const auto &ai : a)
        {
            if (ai < x)
            {
                cnt += (lower_bound(b.begin(), b.end(), x - ai) - b.begin());
                if (cnt >= k)
                {
                    return false;
                }
            }
        }
        return true;
    };
    ll lo = 1, hi = 2e9 + 1;
    while (lo + 1 < hi)
    {
        auto mid = lo + (hi - lo) / 2;
        if (hasLessThanK(mid))
            lo = mid;
        else
            hi = mid;
    }
    return lo;
}

void solve()
{
    ll n, k;
    while (cin >> n >> k)
    {
        vinll(arr, n);
        vinll(brr, n);
        cout << findKthSum(arr, brr, k) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
};
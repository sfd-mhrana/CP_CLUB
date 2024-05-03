#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<int> v(n);          \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int findLargestMinDist(const vector<int> stalls, const int k)
{
    const auto n = stalls.size();

    auto canArrange = [&stalls, k](int dist)
    {
        int cnt = 0, lastStall = -1e9;
        for (const auto pos : stalls)
        {
            if (pos - lastStall >= dist)
            {
                cnt++;
                lastStall = pos;
            }
            if (cnt >= k)
                return true;
        }
        return false;
    };

    int lo = 1, hi = 1e9;
    while (lo + 1 < hi)
    {
        auto mid = lo + (hi - lo) / 2;
        if (canArrange(mid))
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
        cout << findLargestMinDist(arr, k) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
};
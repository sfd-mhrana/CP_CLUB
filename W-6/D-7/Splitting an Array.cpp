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

long long findMinSum(const vector<int> &a, int k)
{
    auto n = a.size();
    auto canSplit = [&a, k, n](long long sum)
    {
        int cnt = 1;
        long long tempSum = 0;
        for (const auto x : a)
        {
            if (tempSum + x > sum)
            {
                cnt++;
                tempSum = 0;
            }
            if (x > sum || cnt > k)
            {
                return false;
            }
            tempSum += x;
        }
        return true;
    };

    long long lo = 0, hi = n * 1e9;
    while (lo + 1 < hi)
    {
        auto mid = lo + (hi - lo) / 2;
        if (canSplit(mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    return hi;
}
void solve()
{
    int n, k;
    while (cin >> n >> k)
    {
        vector<int> a(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << findMinSum(a, k) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
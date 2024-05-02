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

void solve()
{

    int n, k;
    while (cin >> k >> n)
    {
        vinll(groups, n);
        auto canForm = [&groups, k](long long cnt)
        {
            int filled = 0;
            long long last = 0;
            for (const auto &x : groups)
            {
                if (x + last < cnt)
                    last += x;
                else if (x >= cnt)
                    filled++;
                else
                {
                    filled++;
                    last = (x + last) % cnt;
                }

                if (filled >= k)
                    return true;
            }
            return false;
        };
        long long lo = 0, hi = (long long)*max_element(groups.begin(), groups.end()) * n / k + 1;
        while (lo + 1 < hi)
        {
            auto mid = lo + (hi - lo) / 2;
            if (canForm(mid))
                lo = mid;
            else
                hi = mid;
        }
        cout << lo << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
};
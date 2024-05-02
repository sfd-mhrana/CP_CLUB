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
    string p, t;
    while (cin >> p >> t)
    {
        ll n = p.size();
        vinll(arr, n);

        auto good = [n, &p, &t, &arr](int cnt)
        {
            string pNew(p);
            for (auto i = 0; i < cnt; i++)
                pNew[arr[i] - 1] = '*';
            
            int cursor = 0;
            for (const auto &c : t)
            {
                while (cursor < n && pNew[cursor] != c)
                    cursor++;
                if (cursor >= n)
                    return false;
                cursor++;
            }
            return true;
        };

        int lo = 0, hi = n - t.size() + 1;
        while (lo + 1 < hi)
        {
            auto mid = lo + (hi - lo) / 2;
            if (good(mid))
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
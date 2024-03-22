#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k, s;
    cin >> k >> s;

    int ans = 0;
    for (int x = 0; x <= k; ++x)
    {
        for (int y = x; y <= k; ++y)
        {
            int z = s - x - y;
            if (x <= y && y <= z && z <= k)
            {
                set<int> el = {x, y, z};
                ans += (el.size() == 1) ? 1 : (el.size() == 2) ? 3 : 6;
            }
        }
    }

    cout << ans << endl;

    return 0;
};
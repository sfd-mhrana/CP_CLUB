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
    string recipe;
    while (cin >> recipe)
    {
        ll B = 0, S = 0, C = 0;
        for (const auto &x : recipe)
        {
            if (x == 'B')
                B++;
            else if (x == 'S')
                S++;
            else
                C++;
        }
        
        ll nb, ns, nc, pb, ps, pc;
        cin >> nb >> ns >> nc >> pb >> ps >> pc;
        ll rubles;
        cin >> rubles;

        auto canMake = [B, S, C, nb, ns, nc, pb, ps, pc, rubles](ll cnt)
        {
            auto BB = max(B * cnt - nb, 0ll) * pb;
            auto CC = max(C * cnt - nc, 0ll) * pc;
            auto SS = max(S * cnt - ns, 0ll) * ps;
            return BB + CC + SS <= rubles;
        };

        ll lo = -1, hi = rubles + nb + ns + nc + 1;
        while (lo + 1 < hi)
        {
            auto mid = lo + (hi - lo) / 2;
            if (canMake(mid))
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
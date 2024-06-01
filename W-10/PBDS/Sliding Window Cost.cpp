#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    ll countOne = 0;
    fl(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            countOne++;
    }
    if (countOne == n)
    {
        fl(i, n - k + 1)
        {
            cout << 0 << " ";
        }
        cout << endl;
    }
    else
    {
        pbds<pair<ll, ll>> p;

        auto windowCost = [&](ll median)
        {
            ll cost = 0;
            for (auto num : p)
                cost += abs(num.first - median);
            return cost;
        };

        fl(i, k)
            p.insert({arr[i], i});

        ll pos = k / 2;
        if (k % 2 == 0)
            pos--;
        auto it = p.find_by_order(pos);
        cout << windowCost(it->first) << " ";
        p.erase({arr[0], 0});

        ll l = 1, r = k;
        while (r < n)
        {
            p.insert({arr[r], r});
            auto it = p.find_by_order(pos);
            cout << windowCost(it->first) << " ";
            p.erase({arr[l], l});
            l++;
            r++;
        }
        cout << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
};
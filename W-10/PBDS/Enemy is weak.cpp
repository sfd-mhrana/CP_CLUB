#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

#define N 1000010
ll n, ans, pos, cur, a[N], b[N], ft[N];

ll get(ll idx)
{
    ll ret = 0;
    for (; idx; idx -= idx & -idx)
        ret += ft[idx];
    return ret;
}

void add(ll idx)
{
    for (; idx <= n; idx += idx & -idx)
        ft[idx]++;
}

void solve()
{
    cin >> n;
    fl(i, n) cin >> a[i], b[i] = a[i];
    sort(b, b + n);
    fl(i, n)
    {
        pos = lower_bound(b, b + n, a[i]) - b + 1;
        cur = get(pos);
        ans += (i - cur) * (pos - 1 - cur);
        add(pos);
    }
    cout << ans << endl;
}

int main()
{
    fastread();

    solve();

    return 0;
};
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

    vinll(arr, n);
    ll l = 0, r = 0;
    pbds<pair<ll, ll>> p;
    while (r < n)
    {
        p.insert({arr[r], r});
        if (r - l + 1 == k)
        {
            ll pos = k / 2;
            if (k % 2 == 0){
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({arr[l], l});
            l++;
        }
        r++;
    }
    cout << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
};
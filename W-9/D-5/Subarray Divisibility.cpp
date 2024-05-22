#include <bits/stdc++.h>
using namespace std;

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

ll countSubArraysWithSumX(vector<ll> &arr)
{
    ll n = arr.size();
    ll count = 0;
    ll prefix_sum = 0;
    vector<ll> mod_count(n, 0);

    for (ll num : arr)
    {
        prefix_sum = (prefix_sum + num) % n;
        mod_count[(prefix_sum + n) % n]++;
    }

    count += mod_count[0];
    for (ll i = 0; i < n; ++i)
    {
        count += (ll)(mod_count[i] * (mod_count[i] - 1)) / 2;
    }

    return count;
}

int main()
{
    fastread();
    ll n;
    while (cin >> n)
    {
        vinll(arr, n);
        cout << countSubArraysWithSumX(arr);
    }
    return 0;
};
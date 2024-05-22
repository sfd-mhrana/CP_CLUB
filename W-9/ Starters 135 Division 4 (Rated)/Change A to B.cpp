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

ll minOperations(ll A, ll B, ll K)
{
    if (A == B)
        return 0;

    queue<pair<ll, ll>> q;
    unordered_set<ll> visited;

    q.push({A, 0});

    while (!q.empty())
    {
        ll x = q.front().first;
        ll depth = q.front().second;
        q.pop();
        if (x == B)
            return depth;
        if (visited.find(x * K) == visited.end())
        {
            q.push({x * K, depth + 1});
            visited.insert(x * K);
        }
        if (visited.find(x + 1) == visited.end())
        {
            q.push({x + 1, depth + 1});
            visited.insert(x + 1);
        }
    }

    return -1;
}

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll result = minOperations(a, b, k);
    if (result == -1)
        cout << "B cannot be reached from A." << endl;
    else
        cout << "Minimum number of operations: " << result << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
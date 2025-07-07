#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <cmath>
#include <string>
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
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0));

ll gcd(ll a, ll b)
{
    while (b)
    {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    int type;
    cin >> type;

    static set<pair<ll, ll>> s1, s2;
    static map<ll, set<ll>> mm;
    static ll index = 1;

    if (type == 1)
    {
        ll m;
        cin >> m;
        s1.insert({index, m});
        s2.insert({m, index});
        mm[m].insert(index++);
    }
    else if (type == 2)
    {
        if (!s1.empty())
        {
            pair<ll, ll> p = *s1.begin();
            s1.erase(s1.begin());
            s2.erase({p.second, p.first});
            mm[p.second].erase(p.first);
            cout << p.first << " ";
        }
    }
    else if (type == 3)
    {
        if (!s2.empty())
        {
            pair<ll, ll> p = *s2.rbegin();
            if (!mm[p.first].empty())
            {
                ll k = *mm[p.first].begin();
                cout << k << " ";
                s2.erase({p.first, k});
                s1.erase({k, p.first});
                mm[p.first].erase(k);
            }
        }
    }
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
}
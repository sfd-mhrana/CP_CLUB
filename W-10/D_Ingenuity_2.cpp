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
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

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
    int n;
    string t;
    cin >> n >> t;
    int x = 0, y = 0;
    for (auto i : t)
    {
        if (i == 'N')
            y++;
        else if (i == 'S')
            y--;
        else if (i == 'W')
            x--;
        else
            x++;
    }
    if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
        pn
    else if (n == 2 && x == 0 && y == 0)
        pn
    else
    {
        int n = 0, s = 0, w = 1, e = 1;
        char m[2] = {'R', 'H'};
        string ans = "";
        for (auto c : t)
        {
            if (c == 'N')
                ans += m[n], n = 1 - n;
            else if (c == 'S')
                ans += m[s], s = 1 - s;
            else if (c == 'W')
                ans += m[w], w = 1 - w;
            else
                ans += m[e], e = 1 - e;
        }
        cout << ans << '\n';
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
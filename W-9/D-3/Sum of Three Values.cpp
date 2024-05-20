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

void solve()
{
}

int main()
{
    fastread();

    int n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> arr;
    for (ll i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        pair<ll, ll> p;
        p.first = a;
        p.second = i;
        arr.push_back(p);
    }

    sort(begin(arr), end(arr));
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        l = 0;
        r = n - 1;
        while (l != r)
        {
            ll target;
            target = x - arr.at(i).first;
            if (l != i && r != i && arr.at(l).first + arr.at(r).first == target)
            {
                cout << arr.at(i).second << " " << arr.at(l).second << " "
                     << arr.at(r).second << endl;
                return 0;
            }
            if (arr.at(l).first + arr.at(r).first < target)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
};
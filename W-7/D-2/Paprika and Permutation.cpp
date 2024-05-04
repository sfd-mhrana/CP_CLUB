#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    set<ll> s;
    for (ll p = 0; p < n; p++)
    {
        ll x;
        cin>>x;
        if ((x <= n) && (!s.count(x)))
            s.insert(x);
        else
            v.push_back(x);
    }

    sort(v.begin(), v.end());

    ll cnt(v.size()), idx(0);
    for (ll p = 1; p <= n; p++)
    {
        if (s.count(p))
            continue;
        if (v[idx] <= 2 * p)
        {
            cnt = -1;
            break;
        }
        ++idx;
    }

    cout<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;

    vector<ll> v(m);
    vector<char> ch(m);
    for (int i = 0; i < m; i++)
        cin >> v[i] >> ch[i];

    set<ll> ans;
    ans.insert(x);

    set<ll> res;
    for (int i = 0; i < m; i++)
    {
        if (ch[i] == '0')
        {
            set<ll> tans;
            for (auto &it : ans)
            {
                ll a = it + v[i];
                if (a > n)
                    a -= n;
                tans.insert(a);
                if (i == m - 1)
                {
                    res.insert(a);
                }
            }
            ans = tans;
        }
        else if (ch[i] == '1')
        {
            set<ll> tans;
            for (auto &it : ans)
            {
                ll a = it - v[i] + n;
                if (a > n)
                    a -= n;
                tans.insert(a);
                if (i == m - 1)
                    res.insert(a);
            }
            ans = tans;
        }
        else
        {
            set<ll> tans;
            for (auto &it : ans)
            {
                ll a = it + v[i];
                if (a > n)
                    a -= n;
                tans.insert(a);
                if (i == m - 1)
                    res.insert(a);

                a = it - v[i] + n;
                if (a > n)
                    a -= n;
                tans.insert(a);
                if (i == m - 1)
                    res.insert(a);
            }
            ans = tans;
        }
    }
    cout << res.size() << endl;
    for (auto &it : res)
    {
        cout << it << " ";
    }
    cout << endl;
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
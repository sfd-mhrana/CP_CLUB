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

ll getMissingMinElement(ll n, set<ll> st)
{
    ll cur = 0;
    auto it = st.begin();
    while (cur <= n && it != st.end())
    {
        if (cur != *it)
            return cur;
        cur++;
        it++;
    }
    return n;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
    }

    if (n == 1)
    {
        if (k % 2)
            v[0] = 1 - v[0];
        cout << v[0] << endl;
        bye;
    }

    k %= (n + 1);
    if (k == 0)
    {
        for (ll i = 0; i < n; i++)
            cout << v[i] << " ";
        bye;
    }

    for (ll i = n - k + 1; i < n; i++)
        cout << v[i] << " ";
    cout << getMissingMinElement(n, st) << " ";
    for (ll i = 0; i < n - k; i++)
        cout << v[i] << " ";
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
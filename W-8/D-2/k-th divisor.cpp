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
    ll n, k;
    cin >> n >> k;
    vector<ll> st;
    for (ll i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            st.push_back(i);
            if ((n / i) != i)
                st.push_back(n / i);
        }

    sort(st.begin(), st.end());
    if (k <= st.size())
        cout << st[k - 1] << " ";
    else
        cout << -1 << endl;
}
int main()
{
    fastread();
    solve();
    return 0;
};
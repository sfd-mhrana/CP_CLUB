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
    string s;
    cin >> s;
    vector<pair<ll, char>> cap, small, ans;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != 'b' && s[i] != 'B')
            if (s[i] >= 97)
                small.push_back({i, s[i]});
            else
                cap.push_back({i, s[i]});
        else if (s[i] == 'b' && small.size() != 0)
            small.pop_back();
        else if (s[i] == 'B' && cap.size() != 0)
            cap.pop_back();
    }
    for (ll i = 0; i < small.size(); i++)
        ans.push_back(small[i]);
    for (ll i = 0; i < cap.size(); i++)
        ans.push_back(cap[i]);
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i].second;
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
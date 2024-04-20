#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    map<char, vector<ll>> m;
    for (ll i = 0; i < n; i++)
        m[s[i]].push_back(i + 1);

    if (s[0] > s[n - 1])
    {
        ll jump = 0;
        ll cst = abs(s[0] - s[n - 1]);
        vector<ll> path;
        for (ll i = 0; s[0] + i >= s[n - 1]; i--)
        {
            char c = s[0] + i;
            if (m.find(c) != m.end())
            {
                for (auto v : m[c])
                    path.push_back(v);
            }
        }
        cout << cst << " " << path.size() << endl;
        for (auto x : path)
            cout << x << " ";

        cout << endl;
    }
    else if (s[0] < s[n - 1])
    {
        ll jump = 0;
        ll cst = abs(s[0] - s[n - 1]);
        vector<ll> path;
        for (ll i = 0; s[0] + i <= s[n - 1]; i++)
        {
            char c = s[0] + i;
            if (m.find(c) != m.end())
            {
                for (auto v : m[c])
                    path.push_back(v);
            }
        }
        cout << cst << " " << path.size() << endl;
        for (auto x : path)
            cout << x << " ";

        cout << endl;
    }
    else
    {
        cout << 0 << " " << m[s[0]].size() << endl;
        for (auto x : m[s[0]])
            cout << x << " ";

        cout << endl;
    }
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<int> v(n);          \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int maxPrefix(string a, string b)
{
    int i = 0, j = 0;
    while (i < a.length() && j < b.length())
    {
        if (a[i] == b[j])
            i++;
        j++;
    }
    return i;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    cout << maxPrefix(a, b) << endl;
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
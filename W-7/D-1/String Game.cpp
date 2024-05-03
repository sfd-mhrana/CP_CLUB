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

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll onec = 0, zeroc = 0;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zeroc++;
        else
            onec++;
    }
    ll res = min(onec, zeroc);
    if (res % 2 == 0)
        cout << "Ramos" << endl;
    else
        cout << "Zlatan" << endl;
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
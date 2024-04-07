#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, noMatchPair = 0, flag = 0;
    cin >> n;

    string s,res = "";
    cin >> s;

    for (ll i = 0; i < n / 2; i++)
    {
        noMatchPair += (s[i] != s[n - i - 1]);
    }

    for (ll i = 0; i < noMatchPair; i++)
    {
        res += "0";
    }

    if (n % 2 != 0)
    {
        for (ll i = noMatchPair; i <= (n - noMatchPair); i++)
        {
            res += "1";
        }
    }
    else
    {
        for (ll i = noMatchPair; i <= (n - noMatchPair); i++)
        {
            res += (flag % 2 == 0) ? "1" : "0";
            flag++;
        }
    }
    for (ll i = 0; i < noMatchPair; i++)
    {
        res += "0";
    }
    cout << res << endl;
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
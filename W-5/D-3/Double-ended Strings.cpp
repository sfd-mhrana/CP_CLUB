#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

string MatchingStringLength(string a, string b, int m, int n)
{
    int maxlen = 0;
    int endingIndex = m;
    int lookup[m + 1][n + 1];
    memset(lookup, 0, sizeof(lookup));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }
    return a.substr(endingIndex - maxlen, maxlen);
}

void solve()
{
    string a, b;
    cin >> a >> b;

    int m = a.size(), n = b.size();
    string ans = MatchingStringLength(a, b, m, n);
    int ok = ans.size();
    int c = (m - ok) + (n - ok);
    cout << c << "\n";
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
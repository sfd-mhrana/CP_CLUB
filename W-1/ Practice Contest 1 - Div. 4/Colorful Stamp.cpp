#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r, b;
    for (int i = 0; i < s.size(); i++)
    {
        r = 0;
        b = 0;
        if (s[i] != 'W')
        {
            while (i < n && s[i] != 'W')
            {
                if (s[i] == 'R')
                    r++;
                if (s[i] == 'B')
                    b++;
                i++;
            }
            if (!r || !b)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
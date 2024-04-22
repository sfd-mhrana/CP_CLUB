#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

string reverseString(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    string s;
    cin >> s;
    if (s.size() % 2)
        s.erase(s.begin() + s.size() / 2);
    if (s != string(s.size(), s[0]))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
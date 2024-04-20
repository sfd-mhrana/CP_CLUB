#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

char getChar(int n)
{
    return (char)(SMALL_LETTER_STATING_POINT + n - 1);
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string out = "";
    for (ll i = n; i > 0; i--)
    {
        int num = abs(48 - s[i - 1]);
        s = s.substr(0, i - 1);
        if (num == 0)
        {
            string sub = s.substr(i - 3, i - 1);
            num = stoi(sub);
            s = s.substr(0, i - 2);
            i -= 2;
            out += getChar(num);
        }
        else
        {
            out += getChar(num);
        }
    }

    reverse(out.begin(), out.end());
    cout << out << endl;
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
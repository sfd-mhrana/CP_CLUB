#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    
    string a = "";
    for (int i = 0; i < n; i++)
    {
        char se;
        cin >> se;
        if (se == 'B')
            a += 'G';
        else
            a += se;
    }
    string b = "";
    for (int i = 0; i < n; i++)
    {
        char se;
        cin >> se;
        if (se == 'B')
            b += 'G';
        else
            b += se;
    }
    cout << ((b == a) ? "YES" : "NO") << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

ll reverseToLL(ll num)
{
    string s = to_string(num);
    reverse(s.begin(), s.end());
    ll res = stoll(s, nullptr, 10);
    return res;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a > b || reverseToLL(a) > b || a > reverseToLL(b) || reverseToLL(a) > reverseToLL(b))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
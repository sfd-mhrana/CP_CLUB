#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, b;
    cin >> n >> b;

    int ans = -1;
    int i = 0;
    while (i < n)
    {
        int num;
        cin >> num;
        if ((num & b) == b)
            ans &= num;
        i++;
    }
    if (ans == b)
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

bool isCube(ll num)
{

    ll left(1), right(10007);
    while (left <= right)
    {
        ll second = (left + right) / 2;
        ll cube = second * second * second;
        if (cube == num)
            return true;
        else if (cube < num)
            left = second + 1;
        else if (cube > num)
            right = second - 1;
    }

    return false;
}

void solve()
{
    ll x;
    cin >> x;
    bool ans = false;
    for (ll first = 1; first * first * first <= x; first++)
    {
        ll y = x - first * first * first;
        if (isCube(y))
        {
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
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
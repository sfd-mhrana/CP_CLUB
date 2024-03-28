#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

bool isBinaryDecimal(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    if (isBinaryDecimal(n))
    {
        cout << "YES" << endl;
        return;
    }

    bool find = false;
    while (n > 0)
    {
        ll res = n / 11;
        ll res1 = n % 11;
        if (res1 == 0 && isBinaryDecimal(res))
        {
            cout << "YES" << endl;
            find = true;
            break;
        }
        else
        {
            if (res1 != 0)
                break;
            n = res;
        }
    }
    if (!find)
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    int x;
    cin >> x;

    for (ll i = 0; i < (x * 2); i++)
    {
        for (ll j = 0; j < (x * 2); j++)
        {
            ll y = (i / 2) % 2;
            ll z = (j / 2) % 2;

            if (y == 0 && z == 0)
            {
                cout << "#";
            }
            else if (y == 0 && z == 1)
            {
                cout << ".";
            }
            else if (y == 1 && z == 1)
            {
                cout << "#";
            }
            else if (y == 1 && z == 0)
            {
                cout << ".";
            }
        }
        cout<<endl;
    }
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
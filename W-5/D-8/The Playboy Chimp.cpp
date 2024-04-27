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

    unsigned ll hes[50005];

    for (ll i = 0; i < n; ++i)
        cin >> hes[i];

    ll q;
    cin >> q;

    while (q--)
    {
        ll he;
        cin >> he;

        unsigned ll *ab = upper_bound(hes, hes + n, he);
        unsigned ll *be = ab;
        --be;
        while (be >= hes && *be == he)
            --be;
        if (be >= hes)
            cout << *be << ' ';
        else
            cout << "X ";
        if (ab == hes + n)
            cout << "X" << endl;
        else
            cout << *ab << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
};
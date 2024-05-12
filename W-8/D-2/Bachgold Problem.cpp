#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    int n, mid = 0;
    cin >> n;
    mid = (n / 2);
    cout << mid << endl;
    if (n % 2 == 1)
    {
        cout << 3 << " ";
        for (int i = 0; i < mid - 1; i++)
            cout << 2 << " ";
        cout << endl;
    }
    else
    {
        for (int i = 0; i < mid; i++)
            cout << 2 << " ";
        cout << endl;
    }
}

int main()
{
    fastread();
    solve();
    return 0;
};
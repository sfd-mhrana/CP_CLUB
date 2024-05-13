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

int main()
{
    fastread();

    ll n, x;
    cin >> n;
    unordered_map<ll, ll> facs;
    while (n--)
    {
        cin >> x;
        ll sqx = sqrt(x);
        for (ll i = 2; i <= sqx; i++)
        {
            if (x % i == 0)
                facs[i]++;
            while (x % i == 0)
                x /= i;
        }
        if (x > 1)
            facs[x]++;
    }
    ll res = 1;
    for (auto A : facs)
        res = max(res, A.second);
    cout << res << endl;
    return 0;
};
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

const int MAX = 1000001;
bool prime[MAX];

void sieve()
{
    int i, j;
    prime[0] = prime[1] = true;

    for (i = 4; i < MAX; i += 2)
        prime[i] = true;

    for (i = 3; i * i <= MAX; i += 2)
        if (!prime[i])
            for (j = i * i; j < MAX; j += 2 * i)
                prime[j] = true;
}

void solve()
{
    ll n;
    cin >> n;

    ll sq = sqrt(n);
    if (!prime[sq] && sq * sq == n)
        py else pn
}

int main()
{
    fastread();
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
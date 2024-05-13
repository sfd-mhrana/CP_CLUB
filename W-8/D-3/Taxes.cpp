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

bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            return 0;
            break;
        }
    return 1;
}
int main()
{
    fastread();
    ll n;
    cin >> n;
    if (isPrime(n) == 1)
        cout << 1 << endl;
    else if (n % 2 && !isPrime(n - 2))
        cout << 3 << endl;
    else
        cout << 2 << endl;
}
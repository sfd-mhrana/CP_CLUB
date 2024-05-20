#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    fastread();

    ll n;
    while (cin >> n)
    {
        if (n!=1 && n <= 3)
        {
            cout<<"NO SOLUTION"<<endl;
        }
        else
        {
            for (ll i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }

            for (ll i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
};
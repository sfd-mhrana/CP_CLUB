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

ll countSubArraysWithSum(vector<ll> &arr)
{
    ll n = arr.size();

    ll result = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll sum = arr[i];
        if (sum % 2 == 0)
            result = max(result, (ll)1);
        for (ll j = i + 1; j < n; j++)
        {
            sum = sum + arr[j];
            if (sum % 2 == 0)
                result = max(result, j - i + 1);
        }
    }
    return result;
}

void solve()
{
    ll n;
    cin >> n;
    vinll(arr, n);
    cout << countSubArraysWithSum(arr) << endl;
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};
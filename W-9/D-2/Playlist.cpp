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

void solve()
{
    ll n;
    cin >> n;

    vinll(arr, n);

    map<ll, ll> st;
    ll maxL = 0;
    ll count = 0;

    ll l = 0, r = 0;
    while (l <= r && r < n)
    {
        if (!st[arr[r]])
        {
            st[arr[r]]++;
            count++;
            r++;
        }
        else
        {
            maxL = max(maxL, count);
            if (arr[l] == arr[r])
                l++;
            else
            {
                ll minius = 0;
                while (arr[l] != arr[r])
                {
                    minius++;
                    st[arr[l]]--;
                    l++;
                }
                l++;
                count -= (minius);
            }
            r++;
        }
    }
    cout << maxL << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
};
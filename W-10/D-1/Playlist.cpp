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

    map<ll, ll> f;
    ll i = 0, j = 0, curr = 0, ans = 0;
    while (j < n)
    {
        if (f.find(arr[j]) == f.end() || f[arr[j]] == 0)
        {
            f[arr[j]]++;
            j++;
            curr++;
            ans = max(curr, ans);
        }
        else
        {
            f[arr[i]]--;
            i++;
            curr--;
        }
    }

    cout << ans << endl;
}

int main()
{
    fastread();
    solve();
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k, cnt = 0, cat = 0;
    cin >> n >> k;
    vector<ll> v(k);
    for (ll i = 0; i < k; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    while (cat < v[k - 1])
    {
        cat += (n - v[k - 1]);
        cnt++;
        v.erase(v.end() - 1);
        k--;
        if (k == 0 || v.empty())
            break;
    }
    cout << cnt << endl;
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
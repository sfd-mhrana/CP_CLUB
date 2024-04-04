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

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<ll> st;
    ll ans = -1;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (st.count(arr[i]))
        {
            ans = i;
            break;
        }
        else
            st.insert(arr[i]);
    }
    if (ans == -1)
        cout << 0 << endl;
    else
        cout << (ans + 1) << endl;
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
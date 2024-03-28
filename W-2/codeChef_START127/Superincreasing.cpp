#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll arr[n];
    arr[1] = 1;
    for (ll i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        cout<<arr[i+1]<<" ";
    }
    
    cout << (arr[k] < x ? "Yes" : "No") << endl;
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
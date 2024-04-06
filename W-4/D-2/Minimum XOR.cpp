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

    vector<ll> nums;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        nums.push_back(num);
    }

    ll result = nums[0];
    for (ll i = 1; i < n; ++i)
    {
        result ^= nums[i];
    }
    
    ll m_xor = result;
    for (ll i = 0; i < n; ++i)
    {
        ll xor_removal = result ^ nums[i];
        m_xor = min(m_xor, xor_removal);
    }

    cout << m_xor << endl;
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
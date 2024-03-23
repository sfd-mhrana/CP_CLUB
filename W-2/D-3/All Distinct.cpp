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
    set<int> s;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        s.insert(num);
    }
    ll size = s.size();

    if (size % 2 == 0 && n % 2 != 0)
    {
        size--;
    }

    if (size % 2 != 0 && n % 2 == 0)
    {
        size--;
    }
    
    cout << size << endl;
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
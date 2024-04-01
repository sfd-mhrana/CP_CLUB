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

    priority_queue<ll> q;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll in;
        cin >> in;
        if (in == 0)
        {
            if (!q.empty())
            {
                ll num = q.top();
                q.pop();
                sum += num;
            }
        }
        else
            q.push(in);
    }
    cout << sum << endl;
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
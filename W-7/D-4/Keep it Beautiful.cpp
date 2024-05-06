#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr;
    string ans = "";
    bool broken = false;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (arr.empty())
        {
            ans.push_back('1');
            arr.push_back(x);
        }
        else
        {
            if (broken)
            {
                if (x < arr.back())
                    ans.push_back('0');
                else
                {
                    if (x > arr[0])
                        ans.push_back('0');
                    else
                    {
                        ans.push_back('1');
                        arr.push_back(x);
                    }
                }
            }
            else
            {
                // till now, the array is sorted
                if (x >= arr.back())
                {
                    ans.push_back('1');
                    arr.push_back(x);
                }
                else
                {
                    if (x > arr[0])
                        ans.push_back('0');
                    else
                    {
                        broken = true;
                        ans.push_back('1');
                        arr.push_back(x);
                    }
                }
            }
        }
    }

    cout << ans << endl;
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
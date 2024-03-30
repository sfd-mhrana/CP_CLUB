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

    vector<string> arr(n);

    map<string, bool> w;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (w.find(arr[i]) == w.end())
        {
            w[arr[i]] = true;
        }
    }

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (arr[i].size() == 1)
        {   
            ans = ans + "0";
            continue;
        }
        char flag = '0';
        int len = arr[i].length();
        for (int j = 0; j < len; j++)
        {
            if (w.count(arr[i].substr(0, j)) && w.count(arr[i].substr(j, len)))
            {
                flag = '1';
                break;
            }
        }
        ans = ans + flag;
    }

    cout << ans << endl;
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
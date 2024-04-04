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

    string arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<string> st;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (st.count(arr[i]))
            continue;
        else
        {
            st.insert(arr[i]);
            cout<<arr[i].substr(arr[i].length() - 2);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
};
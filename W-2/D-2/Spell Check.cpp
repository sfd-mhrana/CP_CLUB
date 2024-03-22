#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    if (n > 5 || n < 5)
    {
        cout << "NO" << endl;
        return;
    }

    ll arr[150] = {0};
    char num[5] = {'T', 'i', 'm', 'u', 'r'};

    for (int i = 0; i < 5; i++)
    {
        arr[(int)num[i]]++;
    }

    for (ll i = 0; i < s.size(); i++)
    {
        arr[(int)s[i]]++;
    }

    ll countT = 0;
    for (int i = 0; i < 150; i++)
    {
        if (arr[i] == 2)
            countT++;
    }

    if (countT == 5)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    ll k;
    cin >> s >> k;

    map<ll, ll> freq;
    ll distinct = 0, le = 0;
    ll l = 0, r = 0;
    bool found = false;
    for (; r < s.size(); ++r)
    {
        if (freq[(int)s[r]] == 0)
        {
            distinct++;
        }
        freq[(int)s[r]]++;
        while (distinct > k)
        {
            freq[(int)s[l]]--;
            if (freq[(int)s[l]] == 0)
            {
                distinct--;
            }
            l++;
        }

        if (distinct == k)
        {
            found = true;
            le = max(le, r - l + 1);
        }
    }
    if (found)
        cout << le << endl;
    else
        cout << -1 << endl;
    return 0;
};
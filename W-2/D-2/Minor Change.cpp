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
    string s, t;
    cin >> s >> t;

    ll count = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            count++;
    }
    cout<<count<<endl;

    return 0;
};
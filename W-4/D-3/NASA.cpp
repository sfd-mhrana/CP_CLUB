#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

vector<int> allPalindrome;
void precompute()
{
    for (int i = 0; i < 32786; i++)
    {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s)
        {
            allPalindrome.push_back(i);
        }
    }
}
// After the result of any of palindrome number with this array get this number is in this array
void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int, int> x;
    ll ans = 0;
    for (auto ele : v)
    {
        ++x[ele];
        for (auto pali : allPalindrome)
        {
            ans += x[ele ^ pali];
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

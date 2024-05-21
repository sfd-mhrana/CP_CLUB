#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

string makePalindrome(string s)
{
    unordered_map<char, ll> freq;
    for (char c : s)
        freq[c]++;

    string palindrome;
    char oddChar = '\0';
    for (auto it = freq.begin(); it != freq.end(); ++it)
    {
        char c = it->first;
        ll count = it->second;
        if (count % 2 == 1)
        {
            if (oddChar != '\0')
            {
                cout << "NO SOLUTION" << endl;
                return "";
            }
            oddChar = c;
        }
        palindrome += string(count / 2, c);
    }

    string secondHalf = palindrome;
    reverse(secondHalf.begin(), secondHalf.end());
    if (oddChar != '\0')
        palindrome += oddChar;

    palindrome += secondHalf;

    return palindrome;
}
int main()
{
    fastread();
    string s;
    cin >> s;
    string palindrome = makePalindrome(s);
    if (!palindrome.empty())
    {
        cout << palindrome << endl;
    }
    return 0;
};
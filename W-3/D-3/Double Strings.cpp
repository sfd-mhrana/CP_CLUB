#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve() {
    int n;
    cin >> n;

    vector<string> arr(n);
    unordered_set<string> words;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        words.insert(arr[i]);
    }

    string ans = "";
    for (const string& word : arr) {
        if (word.size() == 1) {
            ans += '0';
            continue;
        }
        char flag = '0';
        for (int j = 1; j < word.size(); j++) {
            if (words.count(word.substr(0, j)) && words.count(word.substr(j))) {
                flag = '1';
                break;
            }
        }
        ans += flag;
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
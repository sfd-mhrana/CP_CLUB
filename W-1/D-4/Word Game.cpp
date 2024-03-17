#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    map<string, int> wordCount;
    vector<vector<string>> words(3, vector<string>(n));
    vector<int> points(3, 0);
    
    for (int j = 0; j < n; ++j)
    {
        cin >> words[0][j];
        wordCount[words[0][j]]++;
    }

    for (int j = 0; j < n; ++j)
    {
        cin >> words[1][j];
        wordCount[words[1][j]]++;
    }
    for (int j = 0; j < n; ++j)
    {
        cin >> words[2][j];
        wordCount[words[2][j]]++;
    }

    for (const auto &entry : wordCount)
    {
        int count = entry.second;
        if (count == 1)
        {
            for (ll i = 0; i < words.size(); ++i)
            {
                if (find(words[i].begin(), words[i].end(), entry.first) != words[i].end())
                {
                    points[i] += 3;
                    break;
                }
            }
        }
        else if (count == 2)
        {
            for (ll i = 0; i < words.size(); ++i)
            {
                if (find(words[i].begin(), words[i].end(), entry.first) != words[i].end())
                {
                    points[i]++;
                }
            }
        }

        // Else don't need to increase.
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << points[i] << " ";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};

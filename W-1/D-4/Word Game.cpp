#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    map<string, int> wordCount;
    map<string, int> a;
    map<string, int> b;
    map<string, int> c;
    vector<int> points(3, 0);

    for (ll i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            string str;
            cin >> str;
            if (i == 0)
                a[str]++;
            else if (i == 1)
                b[str]++;
            else
                c[str]++;
            wordCount[str]++;
        }
    }

    for (const auto &entry : wordCount)
    {
        int count = entry.second;
        if (count == 1)
        {
            if (a[entry.first])
            {
                points[0] += 3;
            }
            else if (b[entry.first])
            {
                points[1] += 3;
            }
            else
            {
                points[2] += 3;
            }
        }
        else if (count == 2)
        {
            if (a[entry.first])
            {
                points[0] += 1;
            }
            if (b[entry.first])
            {
                points[1] += 1;
            }
            if (c[entry.first])
            {
                points[2] += 1;
            }
        }
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

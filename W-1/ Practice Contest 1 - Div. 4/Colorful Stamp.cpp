#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n;
    string str;
    cin >> n >> str;
    int red, blue;
    for (int i = 0; i < str.size(); i++)
    {
        red = 0;
        blue = 0;
        if (str[i] != 'W')
        {
            while (i < n && str[i] != 'W')
            {
                if (str[i] == 'R')
                    red++;
                if (str[i] == 'B')
                    blue++;
                i++;
            }
            if (!red || !blue)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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
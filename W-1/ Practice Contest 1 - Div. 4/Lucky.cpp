#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int num;
    cin >> num;

    int count = 0;
    int sum = 0;
    while (num > 0)
    {
        count++;
        int d = num % 10;
        if (count > 3)
        {
            sum -= d;
        }
        else
        {
            sum += d;
        }
        num = num / 10;
    }

    if (sum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
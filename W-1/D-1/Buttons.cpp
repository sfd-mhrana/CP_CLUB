#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, m;
    cin >> m >> n;
    if (n == m)
    {
        cout << (m * 2);
    }
    else
    {
        ll hi = max(n, m);
        cout << ((hi * 2) - 1);
    }
    return 0;
};
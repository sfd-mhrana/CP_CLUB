#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, k;
    cin >> t >> k;
    while (t--)
    {
        ll num;
        cin >> num;
        if (num != k)
            cout << num << " ";
    }
    return 0;
};
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<int> v(n);          \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

// GCD of Two Numbers Using Euclidean Algorithm
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

void solve()
{
    ll x;
    cin >> x;

    int maxSum = -1;
    int maxY;
    for (int y = x/2; y < x; y++)
    {
        int currentSum = gcd(x, y) + y;
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            maxY = y;
        }
    }
    cout << maxY << endl;
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
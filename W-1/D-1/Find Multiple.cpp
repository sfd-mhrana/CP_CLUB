#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll find(ll a, ll b, ll c)
{
    if (a % c == 0 && b % c == 0)
        return a;
    ll rem = a % c;
    ll next = a + (c - rem);
    if (next <= b)
        return next;
    else
        return -1;
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << find(a, b, c);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll findMaxLength(ll x, ll y)
{
    ll ai = x;
    ll ln = 1;
    while (true)
    {
        ll aii = ai * 2;
        if (aii <= y && aii > ai)
        {
            ai = aii;
            ln++;
        }
        else
        {
            break;
        }
    }
    return ln;
}

int main()
{

    ll n, m;
    cin >> n >> m;
    cout << findMaxLength(n, m);
    return 0;
};
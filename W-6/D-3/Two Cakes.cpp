#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll i, j, k;
    ll n, m;
    ll a, b;

    cin>>n>>a>>b;

    if (a > b)
        swap(a, b);

    m = 0;
    for (i = 1; i <= n - 1; i++)
    {
        j = a / i;
        k = b / (n - i);
        if (j >= 1 && k >= 1)
            m = max(m, min(j, k));
    }

    cout<<m<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
};
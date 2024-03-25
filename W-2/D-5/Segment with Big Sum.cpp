#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int l = 0, r = 0;
    ll sum = 0;
    ll le = INT_MAX;
    bool found = false;
    for (; r < n; r++)
    {
        sum += arr[r];
        while (sum >= s)
        {
            found = true;
            le = min(le, r - l + 1);
            sum -= arr[l];
            l++;
        }
    }

    if (found)
    {
        cout << le << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
};
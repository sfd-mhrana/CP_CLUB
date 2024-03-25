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
    ll seg = 0;
    for (; r < n; r++)
    {
        sum += arr[r];
        while (sum > s)
        {
            sum -= arr[l];
            l++;
        }
        seg += r - l + 1;
    }
    cout << seg << endl;
    return 0;
};
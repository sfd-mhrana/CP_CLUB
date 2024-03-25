#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll newArr[n];
    ll pushIndex = 0;
    for (ll i = 0; i <= n / 2; i++)
    {
        if (i == n / 2)
            newArr[pushIndex] = arr[n - i - 1];
        else
        {
            newArr[pushIndex] = arr[i];
            pushIndex++;
            newArr[pushIndex] = arr[n - i - 1];
        }
        pushIndex++;
    }
    bool isOk = false;
    for (ll i = 1; i < n - 1; i++)
    {
        if ((newArr[i - 1] < newArr[i] && newArr[i] > newArr[i + 1]) || (newArr[i - 1] > newArr[i] && newArr[i] < newArr[i + 1]))
        {
            isOk = true;
        }
        else
        {
            isOk = false;
            break;
        }
    }
    if (isOk)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << newArr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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
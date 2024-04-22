#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll num1, num2;
        cin >> num1 >> num2;

        auto autoL = lower_bound(arr.begin(), arr.end(), num1);
        auto autoR = upper_bound(arr.begin(), arr.end(), num2);
        cout << autoR - autoL << " ";
    }

    return 0;
};
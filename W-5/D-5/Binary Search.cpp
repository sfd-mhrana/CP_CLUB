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
    cin >> n >> k;

    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    for (ll i = 0; i < k; i++)
    {
        ll num;
        cin >> num;

        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == num)
            {
                flag = true;
                break;
            }
            if (num > arr[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        if (flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
};
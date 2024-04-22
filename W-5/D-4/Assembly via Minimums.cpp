#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{

    int n;
    cin >> n;
    ll tp = n * (n - 1) / 2;

    ll nums[tp];
    for (ll i = 0; i < tp; i++)
        cin >> nums[i];

    sort(nums, nums + tp);
    for (int i = 0; i < tp; i += --n)
        cout << nums[i] << " ";
    cout << nums[tp - 1] << endl;
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
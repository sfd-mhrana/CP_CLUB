#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

vector<long long> printFirstNegativeInteger(long long int a[],
                                            long long int n, long long int k)
{
    long long int L = 0, R = 0;
    queue<long long int> q;
    vector<long long int> ans;
    while (R < n)
    {
        if (a[R] < 0)
        {
            q.push(a[R]);
        }
        if (R - L + 1 == k)
        {
            if (q.size() >= 1)
            {
                ans.push_back(q.front());
                if (a[L] == q.front())
                {
                    q.pop();
                }
            }
            else
            {
                ans.push_back(0);
            }
            L++;
        }
        R++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll arr[26];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll k;
    cin >> k;
    vector<long long> a = printFirstNegativeInteger(arr, n, k);
    for (auto elem : a) {
        cout << elem << " ";
    }
    return 0;
};
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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    deque<ll> mq, nq;
    ll l = 0, le = 0;

    for (ll r = 0; r < n; ++r)
    {
        while (!mq.empty() && a[r] >= a[mq.back()])
        {
            mq.pop_back();
        }
        while (!nq.empty() && a[r] <= a[nq.back()])
        {
            nq.pop_back();
        }
        mq.push_back(r);
        nq.push_back(r);

        while (a[mq.front()] - a[nq.front()] > k)
        {
            ++l;
            if (mq.front() < l)
            {
                mq.pop_front();
            }
            if (nq.front() < l)
            {
                nq.pop_front();
            }
        }
        le += r - l + 1;
    }

    cout << le << endl;

    return 0;
};
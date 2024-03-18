#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    priority_queue<int> pq;

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        if (num % 2 == 0)
        {
            sum += num;
        }
        else
        {
            pq.push(num);
        }
    }

    ll size = pq.size();
    if (size > 1)
    {
        size = size % 2 == 0 ? size : size - 1;
        for (ll i = 0; i < size; i++)
        {
            sum += pq.top();
            pq.pop();
        }
    }
    cout << sum << endl;

    return 0;
};
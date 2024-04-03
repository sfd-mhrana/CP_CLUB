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
    set<ll, greater<ll>> st;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        st.insert(num);
    }

    set<ll, greater<ll>> missing;
    ll prev = INT_MIN;
    ll first;
    bool allOk=true;
    for (auto &str : st)
    {
        if (prev < 0)
        {
            prev = str;
            first = str;
        }
        else
        {
            if (str + 1 != prev)
            {
                allOk=false;
                ll m = str + 1;
                while (m < prev)
                {
                    missing.insert(m);
                    m++;
                }
            }
            prev = str;
        }
    }
    if(allOk){
        cout<<0<<endl;
        return;
    }

    if (missing.size() == 0)
    {
        int firstValue = *st.begin();
        int lastValue = *(--st.end());
        if (lastValue != 0)
            cout << 0 << endl;
        else
            cout << firstValue + 1 << endl;
    }
    else
    {
        int firstValue = *missing.begin();
        cout << firstValue << endl;
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
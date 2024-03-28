#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    string period = (hour < 12) ? "AM" : "PM";
    if (hour == 0)
        hour = 12;
    else if (hour > 12)
        hour -= 12;
    cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool canBreakShield(int a, int b, int c)
{
    for (int shotsEbony = 0; shotsEbony <= c / a; shotsEbony++)
    {
        int remainingDamage = c - shotsEbony * a;
        if (remainingDamage % b == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (canBreakShield(a, b, c))
        cout << "YES";
    else
        cout << "NO";
    return 0;
};
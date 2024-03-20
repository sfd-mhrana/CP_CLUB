#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    ll half=n / 2;
    
    ll score=half*(13);
    if(n%2==1){
        score+=6;
    }
    cout<<score<<endl;
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
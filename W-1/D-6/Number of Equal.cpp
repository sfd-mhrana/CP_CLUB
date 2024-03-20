#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll arr1[n], arr2[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    ll ans=0;
    for(int i=0,s=0,e=0; i<m; i++)
    {
        while(s<n && arr1[s]<arr2[i])
        {
            s++;
        }

        while(e<n && arr1[e]<=arr2[i])
        {
            e++;
        }
        ans+=e-s;
    }
    cout<<ans<<endl;
    return 0;
};

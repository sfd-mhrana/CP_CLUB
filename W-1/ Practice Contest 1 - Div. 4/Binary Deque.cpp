#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve()
{
    int n, s;
    cin >> n >> s;
    int arr[n], pre[n + 1] = {0};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum < s)
    {
        cout << -1 << endl;
        return;
    }
    if (sum == s)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + arr[i - 1];
    }

    int minus = 0;
    for (int i = 1; i <= n; i++)
    {
        int low = 1, high = n;
        int x = pre[i - 1];
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (pre[mid] - x > s)
                high = mid - 1;
            if ((pre[mid] - x) <= s)
                low = mid + 1;
        }
        minus = max(minus, high - i + 1);
    }
    cout << n - minus << endl;
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






// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define  ll  long long
// #define pii pair<ll,ll>
// #define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
// using namespace __gnu_pbds;
// using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// const int mod = 1e9+7;
// void solve()
// {
//     ll n,sum;
//     cin>>n>>sum;
//     vector<ll>a(n);
//     ll tt = 0;
//     for(ll i =0;i<n;i++)
//     {
//         cin>>a[i];
//         tt+=a[i];
//     }
//     ll cur = 0,i = 0, j = 0;
//     ll ans = LLONG_MIN;
//     bool flag = false;
//     while(j<n)
//     {
//         cur+=a[j];
//         if(cur<sum)
//         {
//             j++;
//             continue;
//         }
//         if(cur == sum)
//         {
//             flag = true;
//             ans = max(ans,j-i+1);
//             j++;
//           //  cur+=a[j];
//             continue;
//         }
//         if(cur > sum)
//         {
//             cur-=a[i];
//             i++;
//             j++;
//         }
//     }
//     if(flag)
//         cout<<n-ans<<"\n";
//     else
//         cout<<"-1\n";
// }
 
// int main()
// {
//     fastread();
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        solve();
//     }
     
//     return 0;
// }
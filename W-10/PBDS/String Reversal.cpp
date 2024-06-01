#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v, n)            \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define fl(i, n) for (ll i = 0; i < n; i++)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());

    map<char,vector<ll>> pos_s,pos_r;

    fl(i,n){
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<ll> per(n);
    for (char i = 'a'; i <='z'; i++)
       for (ll j = 0; j < pos_s[i].size(); j++)
            per[pos_r[i][j]]=pos_s[i][j];
       
   
   pbds<ll> p;
   ll ans=0;
   for(ll i=n-1;i>=0;i--){
    ans+=p.order_of_key(per[i]);
    p.insert(per[i]);
   }
   cout<<ans<<endl;

}

int main()
{
    fastread();
    solve();
    return 0;
};
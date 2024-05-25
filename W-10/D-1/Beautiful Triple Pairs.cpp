#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define bye return
#define vinll(v,n) vector<ll> v(n); for(ll i=0;i<n;i++) cin>>v[i];
#define fl(i,n) for(ll i=0;i<n;i++)
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
ll gcd(ll a,ll b){return __gcd(a,b);}
ll lcm(ll a,ll b){return ((a*b)/gcd(a,b));}


const int SMALL_LETTER_STATING_POINT=97;
const int CAPITAL_LETTER_STATING_POINT=65;


void solve(){
    int n;
    cin >> n;
    
    vinll(arr,n);
    
    map<tuple<ll, ll, ll>, ll> cnt;
    long long ans = 0;
    for (ll i = 0; i < n - 2; ++i) {
        tuple<ll, ll, ll> triplet = make_tuple(arr[i], arr[i + 1], arr[i + 2]);
        vector<tuple<ll, ll, ll>> mist(3);
        mist[0] = make_tuple(0, arr[i + 1], arr[i + 2]);
        mist[1] = make_tuple(arr[i], 0, arr[i + 2]);
        mist[2] = make_tuple(arr[i], arr[i + 1], 0);
 
        for (auto &trip : mist) {
            ans += cnt[trip] - cnt[triplet];
            cnt[trip]++;
        }
        cnt[triplet]++;
    }
    cout << ans << endl;
}


int main(){
   fastread();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
};
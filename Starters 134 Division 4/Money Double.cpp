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
    ll n,y;
    cin>>n>>y;

    while (y--)
    {
       n=max(n+1000,n*2);
    }
    cout<<n<<endl;
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
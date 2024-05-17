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
    ll n;
    cin>>n;

    vinll(arr,n);


    ll v1=0,v2=0;
    for(int i=0;i<n;i+=2) v1 = gcd(v1,arr[i]);
    for(int i=1;i<n;i+=2) v2 = gcd(v2,arr[i]);
    
    bool ok = true;
    for(int i=0;i<n;i+=2){
        if(arr[i]%v2==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<v2<<endl;
        return;
    }
    
    ok = true;
    for(int i=1;i<n;i+=2){
        if(arr[i]%v1==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<v1<<endl;
        return;
    }
    
    cout<<0<<endl;
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
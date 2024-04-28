#include <bits/stdc++.h>
using namespace std;

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

#define endl '\n'
using ll = long long;
#define tc ll T; cin>>T; for(ll t = 1; t <= T; t++)
#define f(n) for (ll i = 0; i < n; i++)
#define ain(v,n) ll v[n]; for(ll i=0;i<n;i++) cin>>v[i];

bool isPossible(ll a[],ll n,ll mid){
    ll cnt=1,L=a[0]-mid,R=a[0]+mid;
    f(n){
        ll l=a[i]-mid,r=a[i]+mid;
        if(l<=R) L=l;
        else{
            cnt++;
            if(cnt==4) return false;
            L=l,R=r;
        }
    }
    return true;
}
void solve(){
        ll n; cin>>n; 
        ain(a,n);
        sort(a,a+n);
        ll l=0,h=1e9;
        while(l<=h){
            ll mid=(l+h)>>1;
            if(!isPossible(a,n,mid)) l=mid+1;
            else h=mid-1;
        }
        cout<<l<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
       solve();
    }
    return 0;
}
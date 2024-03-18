//E
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int r,b;
    for(int i=0; i<s.size(); i++){
        r=0;
        b=0;
        if(s[i]!='W'){
            while(i<n && s[i]!='W'){
                if(s[i]=='R') r++;
                if(s[i]=='B') b++;
                i++;
            }
            if(!r || !b){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}


//F
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    int n,s; cin>>n>>s;
    vector<int>a(n),pre(n+1,0);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<s){
        cout<<-1<<endl;
        return;
    }
    if(sum==s){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
  // for(auto x:pre) cout<<x<<" ";
    int baad=0;
    for(int i=1;i<=n;i++){
        int lo=1,hi=n;
        int x=pre[i-1];
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(pre[mid]-x>s) hi=mid-1;
            if((pre[mid]-x)<=s) lo=mid+1;
        }
        // cout<<i<<" "<<lo<<" "<<hi<<endl;
        baad=max(baad,hi-i+1);
    }
    cout<<n-baad<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}
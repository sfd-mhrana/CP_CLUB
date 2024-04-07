#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


const int SMALL_LETTER_STATING_POINT=97;
const int CAPITAL_LETTER_STATING_POINT=65;


void solve(){
    ll n;
    cin>>n;

    ll msb=log2(n-1);
    ll num=1<<msb;
    for (ll i = n-1; i >=num ; i--)cout<<i<<" ";
    for (ll i =0; i <num ; i++)cout<<i<<" ";
    cout<<endl;
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
};
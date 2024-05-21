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

ll countSubArraysWithSumX(vector<ll>& arr, ll x) {
    ll n = arr.size();
    unordered_map<ll, ll> freq;
    ll sum = 0, count = 0;
    
    for (ll i = 0; i < n; ++i) {
        sum += arr[i];
        if (sum == x)
            count++;
        if (freq.find(sum - x) != freq.end())
            count += freq[sum - x];
        freq[sum]++;
    }

    return count;
}


int main(){
   fastread();
    ll n,x;
    while(cin>>n>>x){
        vinll(arr,n);
        cout<<countSubArraysWithSumX(arr,x);
    }
    return 0;
};
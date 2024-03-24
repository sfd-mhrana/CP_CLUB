#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  map<ll, ll> mp;
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  
   ll heightNo=INT_MIN;
   map<ll, ll>::iterator it = mp.begin();
   while (it != mp.end()) {
           heightNo=max(heightNo,it->second ) ;
        ++it;
   }
   ll needToReplace=n-heightNo;
   
   //cout<<heightNo<<" "<<needToReplace<<" ";
   if(needToReplace<=0){
     cout<<0<<endl;
     return;
   }
   
   ll res=0;
 
   while(needToReplace>0){
     ll ref=needToReplace-heightNo;
     res+=(ref>=0?heightNo:needToReplace)+1;
     
     heightNo+=heightNo;
     needToReplace=ref;
   }
   
   cout<<res<<endl;
}


int main() 
{
  ll t;
  cin>>t;
  while(t--){
    solve();
  }
}
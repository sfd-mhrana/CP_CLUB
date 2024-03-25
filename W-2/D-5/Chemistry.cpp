#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;


int checkPalindrom(string v,int x){
  ll n=v.size(),i=0,j=n-1;
  while(i<j){
    if(v[i]==x)
      i++;
    else if(v[j]==x)
      j--;
    else if(v[i]!=v[j])
      return 0;
    else
     i++,j--;
  }
  return 1;
}


void solve()
{
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;

   ll arr[26]={0};
   
   for(ll i=0;i<n;i++){
     int index=(int)s[i]-SMALL_LETTER_STATING_POINT;
     arr[index]++;
   }
   
   
   ll one=0;
   for(ll i=0;i<26;i++){
      if(arr[i]%2==1)one++;
   }
    
    if(one<=k+1){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
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

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int SMALL_LETTER_STATING_POINT = 97;
const int CAPITAL_LETTER_STATING_POINT = 65;

int checkPalindrom(vector<ll> v,int x){
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
   ll n;
   cin>>n;
   vector<ll> v(n);

   for(ll i=0;i<n;i++){
     cin>>v[i];
   }

   if(n==1 || n==2){
     cout<<"YES"<<endl;
     return;
   }


   int flag=1;
   for(ll i=0;i<n-1-i;++i){
     if(v[i]!=v[n-1-i]){
       flag=checkPalindrom(v,v[i]) or checkPalindrom(v,v[n-1-i]);
       break;
     }
   }

   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

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

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"


const int SMALL_LETTER_STATING_POINT=97;
const int CAPITAL_LETTER_STATING_POINT=65;


void solve(){
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"="<<endl;
        return;
    }
    
    char la=a[a.size()-1],lb=b[b.size()-1];
    if(la=='S' && (lb=='M'||lb=='L')){
        cout<<"<";
    }else if(la=='S' && lb =='S'){
        if(a.size()<b.size()){
            cout<<">";
        }else if(a.size()>b.size()){
            cout<<"<";
        }else{
            cout<<"=";
        }
    }else if(la=='M' && lb=='L'){
        cout<<"<";
    }else if(la=='L' && (lb=='M'||lb=='S')){
        cout<<">";
    }else if(la=='M' && lb=='S'){
        cout<<">";
    }else if(la=='L' && lb=='L'){
         if(a.size()<b.size()){
            cout<<"<";
        }else if(a.size()>b.size()){
            cout<<">";
        }else{
            cout<<"=";
        }
    }
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
#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long operation=0;
    long long highest=0;

    bool prev=false;
    for(int i=0;i<n;i++){
        if(arr[i]<0 && !prev){
            operation++;
            prev=true;
        } else if(arr[i]>0){
            prev=false;
        }

        if(arr[i]<0){
            arr[i]*=-1;
        }

        highest+=arr[i];
    }

    cout<<highest<<" "<<operation<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

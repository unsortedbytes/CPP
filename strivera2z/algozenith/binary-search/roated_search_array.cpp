#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int low =0;
    int high=n-1;
    while(low<high){
        int mid = (high+low)/2;
        if(arr[mid]<arr[high]){
            high=mid;
        }else{
            low = mid+1;
        }
    }
    cout<<low<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    // int n;
    // cin>>n;
    // cout<<n;
    // cout<<2;
}

#include<bits/stdc++.h>
using namespace std;

void largest_element(){
    vector<int> v;
    int n;
    cin>>n;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>max) max = x;

        v.push_back(x);
    }

    cout<<max<<endl;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        largest_element();
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int arr[n+1]={0};
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		long long fronthsh[n+2]={0};
		long long backhsh[n+2]={0};
		for(int i=1;i<=n;i++){
			fronthsh[i] = fronthsh[i-1]+arr[i];
			backhsh[n+1-i] = backhsh[n+2-i]+arr[n-i+1];
		}
		while(q--){
			int l,r,k;
			cin>>l>>r>>k;
			long long sum = fronthsh[l-1]+backhsh[r+1]+((r-l+1)*k);
			if(sum%2!=0){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
}
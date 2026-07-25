#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		long long int a[n];
		long long int b[n];
		for(int i =0;i<n;i++){
			cin>>a[i];
		}
		for(int i =0;i<n;i++){
			cin>>b[i];
		}
		a[n-1] = max(a[n-1],b[n-1]);
		for(int i=n-2;i>=0;i--){
			a[i]=max(a[i], a[i+1]);
			a[i]=max(a[i], b[i]);
		}
	
		long long sumo[n];
		sumo[0]=max(a[0],b[0]);
		if(n>1){
			sumo[0] = max(sumo[0], a[1]);
		}
		for(int i=1;i<n;i++){
			int maxi = max(a[i],b[i]);
			if(i<n-1){
				maxi = max(a[i],a[i+1]);
			}
			sumo[i]=sumo[i-1]+maxi;
		}

		
		while(q--){
			int l, r;
			cin>>l>>r;
			int maxi = max(a[l-1],b[l-1]);
			if(l<n-1){
				maxi = max(a[l-1],a[l]);
			}
			cout<<sumo[r-1]-sumo[l-1]+maxi<<" ";
		}
		cout<<endl;
	}
}
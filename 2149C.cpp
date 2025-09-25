#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		int check[k]={0};
		int countK=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==k){
				countK++;
			}
			if(arr[i]<k){
				check[arr[i]]++;
			}
		}

		int noffunc=0;
		for(int i=0;i<k;i++){
			// cout<<k<<" "<<i<<endl;
			if(check[i]==0){
				// cout<<check[i]<<" "<<i<<endl;
				noffunc++;
			}
		}
		// noffunc=max(countK,noffunc);
		// int total=0;
		// if(countK>=noffunc){
		// 	total=countK;
		// }else{
		// 	total=(2*noffunc)-countK;
		// }
		// cout<<countK<<endl;
		cout<<max(noffunc, countK)<<endl;

	}
	

}
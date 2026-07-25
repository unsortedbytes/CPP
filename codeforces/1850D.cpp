#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int len = 1;
		int maxi=1;
		for(int i=1;i<n;i++){
			if(arr[i] - arr[i-1]<=k){
				len++;
				maxi = max(maxi, len);
			}else{
				len=1;
			}
		}
		cout<<n-maxi<<endl;
	}
}
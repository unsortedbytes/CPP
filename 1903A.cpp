#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int arr[n];
		int mini=INT_MIN;
		bool sorted=true;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<mini) sorted=false;
			mini=arr[i];
		}
		if(k==1&& !(sorted)){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
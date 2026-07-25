#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k, m;
		cin>>n>>k>>m;
		bool isExist = true;
		if(k>m) isExist = false;
		if(!isExist){
			cout<<"NO"<<endl;
			continue;
		}else{
			int arr[n];
			arr[0]=m-k+1;
			for(int i=1;i<n;i++){
				arr[i]=1;
			}
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}

			cout<<endl;
		}
	}	
}
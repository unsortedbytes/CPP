#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i =0;i<n;i++){
			cin>>arr[i];
		}

		int index = -1;
		for(int i=1;i<n-1;i++){
			if(arr[i-1] == arr[i+1] && arr[i]!=arr[i-1]){
				index=i;
			}
		}
		if(index==-1){
			if(arr[0] !=arr[1]){
				index=0;
			}else{
				index=n-1;
			}
		}
		cout<<index+1<<endl;

	}
}
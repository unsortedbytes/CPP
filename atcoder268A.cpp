#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin>>n;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int req = 0;
	for(int i=0;i<n-2;i++){
		if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]){
			req++;
		}
	}
	cout<<req;
}
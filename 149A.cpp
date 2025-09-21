#include<bits/stdc++.h>
using namespace std;

int main(){
	int k;
	cin>>k;
	int arr[12];
	for(int i=0;i<12;i++){
		cin>>arr[i];
	}
	sort(arr, arr+12);
	if(k==0){
		cout<<0<<endl;
		return 0;
	}
	int sum=0;
	int minimum=-1;
	for(int i=11;i>=0;i--){
		sum+=arr[i];
		if(sum>=k){
			minimum=12-i;
			break;
		}
	}
	cout<<minimum<<endl;
}
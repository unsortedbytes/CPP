#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int max = -1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>max) max = arr[i];
	}
	// cout<<max<<endl;
	int total = 0;
	for(int i=0;i<n;i++){
		total+=(max-arr[i]);
	}
	cout<<total<<endl;

}
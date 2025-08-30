#include<bits/stdc++.h>
using namespace std;

long long sumo(int n, int arr[]){
	if(n<0) return ;
	return sumo(n-1, arr) + a[n];
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long sum = sumo(n, arr[n]);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int maxi =1;
	int current = 1;
	for(int i=1;i<n;i++){
		if(arr[i]>=arr[i-1]){
			current++;
			maxi=max(maxi, current);
		}else{
			current=1;
		}
	}
	cout<<maxi;
}
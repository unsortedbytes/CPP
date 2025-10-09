#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin>>n>>x;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[(i+x)%n];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}
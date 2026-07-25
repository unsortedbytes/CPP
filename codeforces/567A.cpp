#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<abs(arr[1]-arr[0])<<" "<<abs(arr[n-1]-arr[0])<<endl;
	for(int i=1;i<n-1;i++){
		int maxi = max(abs(arr[n-1]-arr[i]), abs(arr[0]-arr[i]));
		int mini = min(abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1]));
		cout<< mini<<" "<< maxi<<endl;
	}
	cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[n-1]-arr[0])<<endl;
}
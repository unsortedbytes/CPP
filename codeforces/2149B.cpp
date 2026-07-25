#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int mino=INT_MIN;
		for(int i=0;i<(n/2);i++){
			int dif = arr[(2*i)+1]-arr[(2*i)];
			mino=max(mino, dif);
		}
		cout<<mino<<endl;
	}
}
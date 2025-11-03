#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int ecnt =0, ocnt=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(ecnt%2==0){
				ecnt++;
			}else{
				ocnt++;
			}
		}

		

	}
}
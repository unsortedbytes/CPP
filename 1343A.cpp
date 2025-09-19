#include<bits/stdc++.h>
using namespace std;

int sumofpower(int k){
	return pow(2, k)-1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x;
		for(int i=2;i<n;i++){
			if(n%sumofpower(i) == 0){
				if(sumofpower(i)!=0){

				}
				x=n/sumofpower(i);
				break;
			}
		}
		cout<<x<<endl;
	}
}
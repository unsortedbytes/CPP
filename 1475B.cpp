#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool pos = false;
		// if(n%2020 == 0 || n%2021 == 0) pos = true;
		for(int i=0;i<=n/2021;i++){
			if((n-(i*2021)) % 2020 == 0){
				pos = true;
			}
		}
		if(pos){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
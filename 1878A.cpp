#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, p;
		cin>>n>>p;
		bool pos = false;
		while(n--){
			int x;
			cin>>x;
			if(x==p) pos = true;
		}

		if(pos){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
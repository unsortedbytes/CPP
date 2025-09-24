#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int sub[m+1]={0};
		for(int i=1;i<=m;i++){
			cin>>sub[i];
		}
		bool type = true;
		for(int i=2;i<=m;i++){
			if(sub[i]==1){
				type = false;
			}
		}

		if(type){
			cout<<n+1-sub[m]<<endl;
		}else{
			cout<<1<<endl;
		}
	}
}
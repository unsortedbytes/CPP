#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%4!=0){
			cout<<"NO"<<endl;
			continue;
		}

		int noft=n/2;
		cout<<"YES"<<endl;

		for(int i=1;i<=noft;i++){
			cout<<2*i<<" ";
		}
		for(int i=1;i<=noft-1;i++){
			cout<<(i*2)-1<<" ";
		}
		cout<<noft*3 -1 <<endl;
	}
}
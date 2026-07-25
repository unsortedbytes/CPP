#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		if(n%2!=0){
			cout<<"NO"<<endl;
			continue;
		}
		int nn = 0;
		int np = 0;
		for(int i=0;i<n;i++){
			if(a[i]==-1){
				nn++;
			}else{
				np++;
			}
		}
		if(abs(nn-np)%4==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
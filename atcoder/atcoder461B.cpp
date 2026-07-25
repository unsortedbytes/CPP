#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	int b[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		cin>>b[j];
	}

	bool honest = true;
	for(int i=1;i<=n;i++){
		if(b[a[i]]!=i){
			honest = false;
			break;
		}
	}

	if(honest){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
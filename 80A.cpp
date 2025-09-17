#include<bits/stdc++.h>
using namespace std;

bool checkp(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int a, b;
	bool check = true;

	cin>>a>>b;
	for(int i=a+1;i<=b-1;i++){
		if(checkp(i)){
			check=false;
		}
	}

	if(check && checkp(b)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
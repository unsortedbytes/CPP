#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		bool val=false;
		if(a+b>=10) val=true;
		if(a+c>=10) val = true;
		if(b+c>=10) val = true;
		if(val){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}


}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool pos=true;
	while(n){
		if(n%10==1){
			n/=10;
		}else if(n%100 ==14){
			n/=100;
		}else if(n%1000 == 144){
			n/=1000;
		}else{
			pos = false;
			break;
		}

	}
	if(pos){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
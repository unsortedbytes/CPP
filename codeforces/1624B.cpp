#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		bool pos = false;
		if(((2*b) -c)>0 && ((2*b) -c)%a == 0) pos = true;
		if((a+c)%(2*b)==0) pos = true;
		if(((2*b) - a)>0 && ((2*b) - a)%c ==0 ) pos  = true;

		if(pos){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
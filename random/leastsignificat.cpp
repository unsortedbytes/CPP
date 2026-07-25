#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int signif = 1;
		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			signif = ((signif % 10 ) * (x%10))%10;
		}
		if (signif == 2 || signif == 3 || signif == 5){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
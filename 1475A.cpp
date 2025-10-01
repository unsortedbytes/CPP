#include<bits/stdc++.h>
using namespace std;

// binary -> 

int main(){
	int t;
	cin>>t;
	while(t--){
		// long long n;
		// cin>>n;
		// bool exist = false;
		// for(long long i=3;i*i<=n;i+=2){
		// 	if(n%i==0){
		// 		exist=true;
		// 		break;
		// 	}
		// }
		// // cout<< (exist?"YES":"NO")<<endl;
		// if(exist){
		// 	cout<<"YES"<<endl;
		// }else{
		// 	cout<<"NO"<<endl;
		// }


		long long n;
		cin>>n;
		if((n&(n-1)) == 0){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
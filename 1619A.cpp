#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.size();
		bool is = true;
		for(int i=0;i<n/2;i++){
			if(s[i] !=s[i+(n/2)]){
				is = false;
			}
		}

		if(is && n%2==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
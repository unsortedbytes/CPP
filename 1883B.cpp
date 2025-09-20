#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int hsh[26]={0};
		string s;
		cin>>s;
		for(int i=0;i<n;i++){
			hsh[s[i]-'a']++;
		}
		int oddcount = 0;
		for(int i=0;i<26;i++){
			if(hsh[i]!=0 && hsh[i]%2!=0){
				oddcount++;
			}
		}

		if(k>=oddcount-1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}
}
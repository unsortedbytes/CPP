#include<bits/stdc++.h>
using namespace std;

bool check(string &s){
	if(s.size() !=3) return false;
	string s1="YES";
	string s2="yes";
	for(int i =0;i<3;i++){
		if(s[i] != s1[i] && s[i] != s2[i]){
			return false;
		}
	}

	return true;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
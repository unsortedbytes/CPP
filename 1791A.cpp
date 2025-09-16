#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "codeforces";
	set<char> m ;
	for(int i=0;i<s.size();i++){
		m.insert(s[i]);
	}

	int t;
	cin>>t;
	while(t--){
		char c;
		cin>>c;
		auto it = m.find(c);
		if(it != m.end()){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
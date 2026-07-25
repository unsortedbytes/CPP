#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string init = s.substr(0,2);
		for(int i=3;i<s.size();i++){
			init +=s[i];
			i++;
		}

		cout<<init<<endl;
	}
}
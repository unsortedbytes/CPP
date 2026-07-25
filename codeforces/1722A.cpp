#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	map<char,int> m;
	string so ="Timur";
	for(int i=0;i<so.size();i++){
		m[so[i]]++;
	}
	while(t--){
		int x;
		cin>>x;
		string s;
		cin>>s;
		map<char,int> mt;
		for(int i=0;i<s.size();i++){
			mt[s[i]]++;
		}
		if(mt==m){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
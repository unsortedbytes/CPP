#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<string, int> ct;
	for(int i=1;i<n;i++){
		string sub = s.substr(i-1, 2);
		if(ct.find(sub) == ct.end()){
			ct.insert({sub, 1});
		}else{
			ct[sub]++;
		}
	}
	int count = 0;
	string so = "";
	for(auto &it : ct){
		if(it.second>count){
			count = it.second;
			so=it.first;
		}
	}
	cout<<so<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	unordered_map<string , int> um;
	while(n--){
		string s;
		cin>>s;
		um[s]++;
	}
	for(auto it:um){
		cout<<it.first<<" "<<it.second<<endl;
	}
}
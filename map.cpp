#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
	cout<<"Size :"<<m.size()<<endl;
	for(auto &pr:m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}

int main(){
	map<int, string> m;
	m[1] = "skdfk";
	m[5] = "osjoifjow";
	m[9] = "jljalsfdjl";
	m.insert({2, "aditya"});

	for(auto it:m){
		cout<<it.first<<" "<<it.second<<endl;
	}
	map<int, string> ::iterator it;
	for(it  = m.begin(); it!=m.end();++it){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}

	print(m);

	auto ito = m.find(5);
	if(ito != m.end()){
		cout<<ito->first<<" "<<ito->second<<endl;
	}

	cout<<endl<<endl<<endl<<endl;
	cout<<"Unordered map"<<endl;
	unordered_map<int, string> um;
	um[1] = "abc";
	um[4] = "oksjfo";
	um[23] = "sldkfjlaf";
	um[2] = "ldjfi";
	um[6] = "llso";

	for(auto it :um){
		cout<<it.first<<" "<<it.second<<endl;
	}
}
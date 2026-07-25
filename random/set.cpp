#include<bits/stdc++.h>
using namespace std;

void print(set<string> &m){
	for(string value: m){
		cout<<value<<endl;
	}
}

int main(){
	set<string> s;
	s.insert("abc");
	s.insert("lsjfl");
	s.insert("jsdjfl");
	auto it = s.find("abc");
	if(it != s.end()){
		s.erase(it);
	}
	print(s);


	unordered_set<string> us;
	
}
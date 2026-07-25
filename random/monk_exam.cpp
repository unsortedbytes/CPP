#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	map<int, multiset<string>> marks_map;

	for(int i =0;i<n;i++){
		int marks;
		string name;
		cin>>name>>marks;
		marks_map[marks].insert(name);
	}

	auto last_it = --marks.map.end();

	while(true){
		auto &students = (*last_it).second;
		int marks = (*last_it).first;
		for(auto student:students){
			cout<<student<<" "<<marks<<endl;
		}
		if(last_it == marks_map.begin()) break;
		last_it--;
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	map<pair<int, int>, int> m1;
	pair<int, int> p1, p2;
	p1 = {2,3};
	p2 = {2, 3};
	cout<<(p1<p2)<<endl;
	set<int> s1, s2;
	s1={1, 2 ,-1};
	s2={1,2};
	cout<<(s1<s2)<<endl;


	map<pair<string, string>, vector<int>> M;
	int n;
	cin>>n;
	for(int i = 0;i< n;i++){
		string fn, ln;
		int ct;
		cin>> fn>>ln>>ct;
		for(int j=0;j<ct;++j){
			int x;
			cin>>x;
			M[{fn, ln}].push_back(x);
		}
	}
	for(auto &pr:M){
		auto full_name = pr.first;
		auto &list = pr.second;
		cout<<full_name.first<< " "<< full_name.second<<endl;
		cout<<list.size()<<endl;
		for(auto &element:list){
			cout<<element<<" ";
		}
		cout<<endl;
	}
}
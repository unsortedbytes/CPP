#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 6};
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl<<endl;
	vector<int> ::iterator xxx = v.begin();
	cout<<*xxx<<endl;
	cout<<*(xxx+3)<<endl;
	cout<<endl<<endl<<endl;
	for(vector<int>::iterator xxx = v.begin();xxx!=v.end();xxx++){
		cout<<*xxx<<endl;
	}

	cout<<endl<<endl<<endl<<endl;

	vector<pair<int, char>> v_p = {{1,'z'}, {2, 's'}, {3, 'e'}};
	vector<pair<int, char>> ::iterator it;
	for(it = v_p.begin(); it!=v_p.end();++it){
		cout<<(*it).first << " "<<(*it).second<<endl;
	}
	for(it = v_p.begin(); it!=v_p.begin();++it){
		cout<<(it->first) << " "<<(it->second)<<endl;
	}
	for(pair<int,char>veto:v_p){
		cout<<veto.first<<" "<<veto.second<<endl; 
	}
	for(auto veto:v_p){
		cout<<veto.first<<" "<<veto.second<<endl;
	}
	for(int value:v){
		cout<<value<<" ";
	}


	cout<<endl<<endl<<endl<<endl;


	for(int value:v){
		cout<<value<<" ";
	}
	cout<<endl;

	for(int value:v){
		value++;
	}
	for(int value:v){
		cout<<value<<" ";
	}
	cout<<endl;
	for(int &value:v){
		value++;
	}
	for(int value:v){
		cout<<value<<" ";
	}
}
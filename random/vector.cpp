#include<bits/stdc++.h>
using namespace std;
// template<typename T>

void printVec(vector<int> v){
	cout<<"Size : "<<v.size()<<endl;
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

template<typename T>
void printVo(vector<T> v){
	cout<<"Size : "<<v.size()<<endl;
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> v;

	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		int x;
		cin>>x;
		// printVec(v);
		v.push_back(x);
	}
	printVec(v);

	vector<int>v1(5);

	printVec(v1);
	v1.pop_back();
	v1.pop_back();
	v1.push_back(23);
	printVec(v1);

	vector<int> &v2 = v1;
	v1[1] = 32;
	printVec(v2);

	vector<string>v3;
	int n0 ;
	cin>>n0;
	for(int i =0;i<n0;i++){
		string x;
		cin>>x;
		v3.push_back(x);

	}
	printVo(v3);
}
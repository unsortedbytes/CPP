#include<bits/stdc++.h>
using namespace std;

template <typename T, typename C>
void printVec(vector<pair<T,C>> &v){
	cout<<"Size : "<<v.size()<<endl;
	for(int i =0;i<v.size();++i){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

int main(){
	vector<pair<int,char>> v = {{1,'a'}, {2,'b'}, {4,'c'}};
	printVec(v);

	v.push_back({4,'d'});
	printVec(v);


	vector<int> v[10];

	int N;
	cin>>N;
	while(N--){
		
	}
}

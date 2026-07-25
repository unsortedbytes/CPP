#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b){
	if(a<b) return true;
	return false;
}

bool should_i_swap_pair(pair<int, int> a, pair<int, int> b){
	// if(a<b)return true;
	// return false;
	if(a.first !=b.first){
		if(a.first>b.first) return true;
		return false;
	}else{
		if(a.second	< b.second) return true;
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+3, a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	for( int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(should_i_swap(v[i], v[j])){
				swap(v[i], v[j]);
			}
		}
	}
	// sort(v.begin(), v.end());
	for(int i =0;i<n;i++){
		cout<<v[i]<<" ";
	}


	vector<pair<int, int>> ao(n);
	for(int i=0;i<n;i++){
		cin>> ao[i].first >> ao[i].second;
	}
	// for(int i =0;i<n;i++){
	// 	for(int j=i+1;j<n;j++){
	// 		if(should_i_swap_pair(ao[i], ao[j])){
	// 			swap(ao[i] , ao[j]);
	// 		}
	// 	}
	// }

	sort(ao.begin(), ao.end(), 	should_i_swap_pair);

	for(int i =0;i<n;i++){
		cout<<ao[i].first<<" "<<ao[i].second<<endl;
	}
}
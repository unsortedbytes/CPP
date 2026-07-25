#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int *ptrl = lower_bound(a, a+n,4);
	int *ptru = upper_bound(a, a+n , 25);// if greatest -> garbage value
	cout<<*ptrl<<endl;
	cout<<*ptru<<endl;

	if(ptrl == (a+n)){
		cout<<"NOT FOUND";
	}
	cout<<(*ptrl)<<endl;


	set<int> s;
	for(int i=0;i<n;++i){
		int x;
		cin>>x;
		s.insert(x);
	}
	// auto it = lower_bound(s.begin(), s.end(), 25);
	auto it = s.lower_bound(23);
	cout<<(*it)<<endl;

	// same for map
	map<int, int> m;
	
}
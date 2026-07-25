#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	int sum =0;
	for(int i=0;i<min(n,m);i++){
		if(v[i]>0) break;
		sum+=v[i];
	}
	cout<<-sum<<endl;
}
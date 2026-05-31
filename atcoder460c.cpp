#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<m;i++){
		cin>>b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int i=0;
	int j=0;

	int cnt=0;
	while(i<n&&j<m){
		if(b[j]>2*a[i]){
			i++;
		}else{
			cnt++;
			i++;
			j++;
		}
	}
	cout<<cnt;
};
#include<bits/stdc++.h>
using namespace std;

long long ranked(vector<int> a, int n){
	long long ranking =0;
	vector<bool> used(n+1, false);
	vector<long long> fact(n+1, 1);
	for(int i=1;i<=n;i++){
		fact[i]=fact[i-1]*i;
	}

	for(int i=0;i<n;i++){
		int cnt=0;
		for(int x=1;x<a[i];x++){
			if(!used[x]){
				cnt++;
			}
		}
		ranking += 1LL*cnt*fact[n-1-i];
		used[a[i]]=true;
	}

	return ranking;
}

int main(){
	int n;
	cin>>n;
	vector<int> p(n), q(n);
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		cin>>q[i];
	}

	long long result = ranked(q,n)-ranked(p, n)-1;
	if(result<0) {
		cout<<0;
		return 0;
	}
	cout<<result;
}
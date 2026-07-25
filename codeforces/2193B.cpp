#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}

		int l=0;
		int r = 0;
		for(int i=0;i<n;i++){
			if(v[i]!=(n-i)){
				l=i;
				break;
			}
		}
		r = l;
		for(int i=l+1;i<n;i++){
			if(v[i]>v[r]){
				r = i;
			}
		}
		reverse(v.begin()+l, v.begin()+r+1);

		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
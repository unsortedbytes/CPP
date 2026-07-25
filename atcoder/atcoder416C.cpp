#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,m;
	cin>>n>>k>>m;
	int c[n+1]={0};
	int v[n+1]={0};

	for(int i=1;i<=n;i++){
		cin>>c[i]>>v[i];
	}

	vector<int> selected(n+1,0);
	long long total =0;

	map<int, vector<int>> color_index;
	for(int i=1;i<=n;i++){
		color_index[c[i]].push_back(i);
	}
	for(auto it=color_index.begin();it!=color_index.end();++it){
		int max_value_index=0;
		for(int x: it->second){
			if(v[x]>v[max_value_index]){
				max_value_index=x;
			}
		}
		selected[max_value_index]=1;

	}
	vector<int> booked;
	vector<int> leftover;
	for(int i=1;i<=n;i++){
		if(selected[i]==1){
			booked.push_back(v[i]);
		}else{
			leftover.push_back(v[i]);
		}
	}
	sort(booked.begin(), booked.end());


	// int checklist[i]
	for(int i=(int)booked.size()-1;i>=0;i--){
		total+=1LL*booked[i];
		m--;
		k--;
		if(m==0){
			for(int j=i-1;j>=0;j--){
				leftover.push_back(booked[j]);
			}
			break;
		}
		if(k==0){
			cout<<total;
			return 0; 
		}
	}

		sort(leftover.begin(), leftover.end());

	int idx = leftover.size() - 1;
	while(k--){
    	total += leftover[idx--];
	}
	cout<<total;




}
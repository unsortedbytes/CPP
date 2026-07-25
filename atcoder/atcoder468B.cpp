#include<bits/stdc++.h>
using namespace std;

int main(){
	int d, m;
	cin>>m>>d;
	string s;
	cin>>s;
	vector<int> watched(m,0);
	for(int i=0;i<m;i++){
		if(s[i]=='G'){
			for(int j=i-d;j<=i+d;j++){
				if(j>=0 && j<=m-1){
					watched[j]=1;
				}
			}
		}
	}
	int ungraded = 0;
	for(int i=0;i<m;i++){
		if(watched[i]==0){
			ungraded++;
		}
	}

	cout<<ungraded;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count_0=0;
		int count_1=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x==0) count_0++;
			if(x==-1) count_1++;
		}

		int mino=0;
		mino+=count_0;
		if(count_1%2!=0){
			mino+=2;
		}
		cout<<mino<<endl;
	}
}
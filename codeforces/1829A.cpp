#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count = 0;
		int maxo = 0;
		while(n--){
			int x;
			cin>>x;
			if(x==1){
				count=0;
			}else{
				count++;
				if(maxo < count) maxo=count;
			}
		}

		cout<<maxo<<endl;
	}
}
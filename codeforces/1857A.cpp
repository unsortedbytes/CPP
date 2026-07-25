#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count = 0;
		while(n--){
			int x;
			cin>>x;
			if(x%2!=0){
				count++;
			}
		}

		if(count%2==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
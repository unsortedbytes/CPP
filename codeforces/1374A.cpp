#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, y ,n;
		cin>>x>>y>>n;
		int rem = n%x;
		int result =0;
		
		if((n+y-rem)>n) {
			result = n-rem-(x-y);
		}else{
			result = n-rem+y;
		}

		cout<<result<<endl;
	}
}
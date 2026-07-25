#include<bits/stdc++.h>
using namespace std;

int digit_sum(long long n){
	if(n == 0) return 0;
	return digit_sum(n/10) + n%10;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<digit_sum(n)<<endl;
	}
}
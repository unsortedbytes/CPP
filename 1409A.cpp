#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		if(a>b) swap(a, b);
		int step=0;
		int value = b-a;
		if(value %10 !=0) step++;
		step+=(value/10);

		cout<<step<<endl;
	}
}
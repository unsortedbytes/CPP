#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, y;
		cin>>x>>y;
		int a=min(x,y);
		int b=max(x,y);
		long long sum=0;
		for(int i=a+1;i<b;i++){
			if(i%2!=0){
				sum+=i;
			}
		}
		cout<<sum<<endl;
	}
}
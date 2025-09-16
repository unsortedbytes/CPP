#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int m = 0;
	int c = 0;
	while(t--){
		int x, y;
		cin>>x>>y;
		if(x>y){
			m++;
		}else if (y>x){
			c++;
		}
	}
	if(m>c){
		cout<<"Mishka";
	}else if (c>m){
		cout<<"Chris";
	}else{
		cout<<"Friendship is magic!^^";
	}
}
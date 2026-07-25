#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x=0;
	while(n--){
		int a, b;
		string s;
		cin>>a>>b>>s;
		if(s=="keep"){
			x+=b-a;
		}
	}
	cout<<x;
}
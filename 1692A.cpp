#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x, a,b,c;
		cin>>x>>a>>b>>c;
		int front =0;
		if(a>x) front++;
		if(b>x) front++;
		if(c>x) front++;

		cout<<front<<endl;
	}
}
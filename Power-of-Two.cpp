#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	float p=log2(n);
	if(floor(p)==p){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
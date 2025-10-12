#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin>>n>>k;
	long long kth;
	if(k<=(n+1)/2){
		kth=1+((k-1)*1LL*2);
	}else{
		kth=2+(k-1-((n+1)/2))*1LL*2;
	}
	cout<<kth;
}
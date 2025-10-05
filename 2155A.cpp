#include<bits/stdc++.h>
using namespace std;

int  main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int wc=n, lc=0, count=0;
		while(wc!=1||lc!=1){
			count+=(lc/2)+(wc/2);
			lc=((lc+1)/2)+(wc/2);
			wc=(wc+1)/2;
		}
		count++;
		cout<<count<<endl;
	}
}
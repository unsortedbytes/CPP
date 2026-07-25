// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int q;
// 	cin>>q;
// 	while(q){
// 		int x;
// 		cin>>x;
// 		int ct = 0;
// 		for(int i=0;i<n;i++){
// 			if(x == a[i]) ct++;
// 		}
// 		cout<<ct<<endl;
// 		q--;
// 	}
// }

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
int hsh[N];

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
		hsh[a[i]]++;
	}
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<hsh[x]<<endl;	
	}
}
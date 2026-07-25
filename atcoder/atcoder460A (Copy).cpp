#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int cnt=0;
	while(m!=0){
		m=n%m;
		cnt++;
	}
	cout<<cnt;
}
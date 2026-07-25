#include<bits/stdc++.h>
using namespace std;

int main(){
	int maxi=INT_MIN;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		maxi=max(maxi, x);
	}
	cout<<maxi;
}
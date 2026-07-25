#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , k;
	cin>>n>>k;
	int legit = 0;
	while(n--){
		int x;
		cin>>x;
		if(x<=5-k) legit++;
	}

	int team = legit/3;
	cout<<team<<endl;
}
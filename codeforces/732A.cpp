#include<bits/stdc++.h>
using namespace std;

int main(){
	int k, r;
	cin>>k>>r;

	int n=1;
	while(true){
		int value = k*n;
		if(value%10 == 0 || value%10 == r){
			break;
		}
		n++;
	}
	cout<<n;
}
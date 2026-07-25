#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int maxi=max(a,b);
	int pos = 7-maxi;
	int gcd = __gcd(pos, 6);

	cout<<(pos)/gcd<<"/"<<6/gcd<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int total =0;
		for(int i=s.size()-1;i>=0;i--){
			total+=pow(2, s.size()-1+i)*((int)(s[i] - '0'));
		}
		cout<<total<<endl;
	}
}
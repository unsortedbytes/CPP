#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> m;
	for(int i=1;i<5;i++){
		int x;
		cin>>x;
		m[i] =x;  
	}
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum+=m[s[i]-'0'];
	}
	cout<<sum<<endl;
}
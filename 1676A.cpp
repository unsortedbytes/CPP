#include<bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int start = 0;
		int last = 0;
		for(int i=0;i<3;i++){
			start +=int(s[i]-'0');
		}
		for(int i = 3;i<6;i++){
			last += int(s[i]-'0');
		}

		if(start == last){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
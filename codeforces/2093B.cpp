#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int index;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]!='0'){
				index=i;
				break;
			}
		}

		int count=s.size()-1-index;
		for(int i=0;i<index;i++){
			if(s[i]!='0') count++;
		}
		cout<<count<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count0=0;
		int count1=0;
		for(int i=0;i<s.size();i++){
			if(s[i]-'0'==0){
				count0++;
			}else{
				count1++;
			}
		}
		int maxpair = min(count0, count1);
		if(maxpair%2!=0){
			cout<<"DA"<<endl;
		}else{
			cout<<"NET"<<endl;
		}
	}
}
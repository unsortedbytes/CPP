#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		set<char> st;
		int ballons = 0;
		for(int i=0;i<n;i++){
			if(st.find(s[i]) != st.end()){
				ballons++;
			}else{
				ballons+=2;
				st.insert(s[i]);
			}
		}
		cout<<ballons<<endl;
	}
}
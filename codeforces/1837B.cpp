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
		set<int> st;
		int current =0;
		st.insert(current);
		for(int i=0;i<n;i++){
			if(s[i]=='<'){
				current++;
			}else{
				current--;
			}
			st.insert(current);
		}
		cout<<st.size()<<endl;
	}
}
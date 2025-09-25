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
		int pot = 0;
		set<int> st;
		st.insert(0);
		for(int i=0;i<n;i++){
			if(s[i]=='<'){
				// for(auto it:st){
				// 	if(it > pot){
				// 		pot=it;
				// 		break;
				// 	}


				// }
				auto it = st.upper_bound(pot);

				// while(it!=st.end()){
				// 	if(*it>pot){
				// 		break;
				// 	}
				// 	it++;
				// }
				if(it!=st.end()){
					pot=*it;
				}else{
					pot++;
				}				
			}else{
				auto it = st.upper_bound(pot);

				while(it!=st.end()){
					if(*it<pot){
						break;
					}
					it++;
				}
				if(it!=st.begin()){
					pot=*it;
				}else{
					pot--;
				}
			}
			st.insert(pot);
		}
		cout<<st.size()<<endl;	
	}
}
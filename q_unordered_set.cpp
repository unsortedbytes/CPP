#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	unordered_set<string> us;
	while(n--){
		string c;
		cin>>c;
		us.insert(c);
	}

	int q;
	cin>>q;
	while(q--){
		string c;
		cin>>c;
		if(us.find(c) != us.end()){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	multiset<set<int>> s;
	
}
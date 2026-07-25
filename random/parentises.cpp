#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		stack<char> s;
		string c;
		cin>>c;
		for(int i = 0;i<c.size();i++){
			if(c[i]=='('){
				s.push(c[i]);
			}else{
				if(!s.empty() && s.top()=='('){
					s.pop();
				}else{
					s.push(c[i]);
				}
				
			}
		}

		if(s.empty()){
			cout<<"Correct"<<endl;
		}else{
			cout<<"False"<<endl;
		}
	}
}
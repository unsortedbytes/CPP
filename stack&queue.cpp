#include<bits/stdc++.h>
using namespace std;

int main(){
	// stack
	stack<int> s;
	s.push(2);
	s.push(52);
	s.push(29);
	s.push(2);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}
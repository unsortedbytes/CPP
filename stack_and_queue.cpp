#include<bits/stdc++.h>
using namespace std;

int main(){
	// stack
	stack<int> s;
	s.push(2);
	s.push(5);
	s.push(9);
	s.push(12);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

	queue<string> q;
	q.push("Aditya");
	q.push("Kumar");
	q.push("rom");
	q.push("Roma");
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
}
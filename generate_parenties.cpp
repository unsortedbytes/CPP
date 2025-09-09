#include<bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s, int open, int close){

	if(open ==0 && close == 0){
		valid.push_back(s);
		return;
	}

	if(open>0){
		s.push_back('(');
		generate(s, open -1 , close);
		s.pop_back();
	}
	if(close > 0 && open < close){
		s.push_back(')');
		generate(s, open, close-1);
		s.pop_back();
	}
}

int main(){
	string s = "";
	generate(s, 3, 3);
	for(int i =0;i<valid.size();i++){
		cout<<valid[i]<<endl;
	}
}
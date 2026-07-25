#include<bits/stdc++.h>
using namespace std;

char upper(char c){
	return 'A' + (c - 'a');
}

char lower (char c){
	return 'a' + (c - 'A');
}

bool is_prime(int n){
	for(int i=2;i<n;++i){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>= 'a' && s[i]<='z'){
			s[i]=upper(s[i]);
		}else if (s[i]>='A' && s[i] <= 'Z'){
			s[i] = lower(s[i]); 
		}
	}
	int result =0;
	for(int i=0;i<s.size();i++){
		if(s[i]>= 'a' && s[i]<='z'){
			result = result - s[i];
		}else{
			result = result + s[i];
		}
	}

	if(is_prime(result)){
		cout<<result<<endl;
	}else{
		cout<<0<<endl;	
	}
}
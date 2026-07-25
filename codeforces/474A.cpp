#include<bits/stdc++.h>
using namespace std;

int main(){

	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

	char c;
	cin>>c;
	string sa;
	cin>>sa;
	string rel="";
	for(int i=0;i<sa.size();i++){
		char v =sa[i];
		int index ;
		for(int j=0;j<s.size();j++){
			if(v==s[j]){
				index = j;
				break;
			}
		}
		if(c=='R'){
			index--;
		}else{
			index++;
		}

		rel+=s[index];
	}
	cout<<rel<<endl;
	
}
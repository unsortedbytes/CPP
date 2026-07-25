#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string initial="";
	for(int i=0;i<s.size();i++){
		if(s.substr(i,3)=="WUB"){
			i+=2;
		}else{
			while(i<s.size()&&s.substr(i,3)!="WUB"){
				initial+=s[i];
				i++;
			}
			initial+=" ";
			i+=2;
		}
	}
	cout<<initial<<endl;
}
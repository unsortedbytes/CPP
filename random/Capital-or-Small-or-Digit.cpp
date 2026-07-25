#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
	cin>>c;
	if(c>=48 && c<=57){
		cout<<"IS DIGIT"<<endl;
	}else if(c>=65&&c<=91){
		cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
	}else{
		cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
	}
}
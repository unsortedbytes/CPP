#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string c;
		cin>>c;
		bool pos = false;
		if(c=="abc") pos = true;
		swap(c[0],c[1]);
		if(c=="abc") pos = true;
		swap(c[0],c[1]);

		swap(c[0],c[2]);
		if(c=="abc") pos = true;
		swap(c[0],c[2]);

		swap(c[1],c[2]);
		if(c=="abc") pos = true;
		swap(c[1],c[2]);


		if(pos){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		if(x>= 1900){
			cout<<"Division 1"<<endl;
		}else if (x>= 1600 && x<1900){
			cout<<"Division 2"<<endl;
		}else if (x>=1400 && x<1600){
			cout<<"Division 3"<<endl;
		}else{
			cout<<"Division 4"<<endl;
		}
	}
}
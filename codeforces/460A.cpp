#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;;i++){
		if(i%m == 0){
			continue;
		}else{
			n--;
		}
		if(n==0){
			cout<<i<<endl;
			break;
		}
	}
}
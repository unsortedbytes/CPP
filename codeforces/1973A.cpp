#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int p1, p2, p3;
		cin>>p1>>p2>>p3;
		if(p2>p3){
			swap(p2, p3);
		}
		if(p1>p2){
			swap(p2, p1);
		}
		if(p2>p3){
			swap(p2, p3);
		}

		int mini = p1;
		if((p3 - p2+p1 )%2==0){
			cout<<p2<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	vector<int>v;
	for(int i=a;i<=b;i++){
		bool pos=true;
		int temp=i;
		while(temp){
			if(temp%10!=4&&temp%10!=7) pos=false;
			temp/=10;
		}
		if(pos) v.push_back(i);
	}
	if(v.size()){
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
	}else{
		cout<<-1;
	}
}
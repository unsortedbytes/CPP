#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	deque<int> collect;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		collect.push_back(x);
	}
	int sereja = 0, dima = 0;

	while(true){
		if(collect.empty()) break;
		int sl=collect.front();
		int sr = collect.back();
		if(sl>sr){
			sereja+=sl;
			collect.pop_front();
		}else{
			sereja+=sr;
			collect.pop_back();
		}

		if(collect.empty()) break;

		int dl = collect.front();
		int dr = collect.back();

		if(dl>dr){
			dima+=dl;
			collect.pop_front();
		}else{
			dima+=dr;
			collect.pop_back();
		}
	}

	cout<<sereja<<" "<<dima<<endl;
}
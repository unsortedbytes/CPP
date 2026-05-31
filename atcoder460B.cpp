#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x1, y1, r1, x2, y2, r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	long long dx=x1-x2;
	long long dy= y1-y2;

	// long long distace = sqrt(pow((x1-x2),2) + pow((y1-y2), 2));
	long long dist2 = dx*dx + dy*dy;
	long long r = r1+r2;
	long long rt = abs(r1-r2);
	// long long r=r1+r2;

	if(dist2>r*r || dist2<rt*rt ){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
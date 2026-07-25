#include<bits/stdc++.h>
#include<numeric>
using namespace std;

long long lcm(long long a , long long b){
	if(b==0) return a;
	return (a*b)/__gcd(a,b);
}

void solve(){
	long long a, b, c, m;
	cin>>a>>b>>c>>m;
	long long lcmab = lcm(a,b);
	long long lcmac = lcm(a,c);
	long long lcmbc = lcm(b,c);
	long long lcmabc = lcm(lcm(a,b), c);

	long long A= (6LL*(m/a - (m/lcmab) - (m/lcmac) +(m/lcmabc))) + (3LL*((m/lcmab) + (m/lcmac) - (2*(m/lcmabc)))) + (2LL*(m/lcmabc));
	long long B= (6LL*(m/b - (m/lcmbc) - (m/lcmab) +(m/lcmabc))) + (3LL*((m/lcmab) + (m/lcmbc) - (2*(m/lcmabc)))) + (2LL*(m/lcmabc));
	long long C= (6LL*(m/c - (m/lcmac) - (m/lcmbc) +(m/lcmabc))) + (3LL*((m/lcmbc) + (m/lcmac) - (2*(m/lcmabc)))) + (2LL*(m/lcmabc));
	cout<<A<<" "<<B<<" "<<C<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
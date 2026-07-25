// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n, q;
// 		cin>>n>>q;
// 		int a[n+10];
// 		for(int i = 1;i<=n;++i){
// 			cin>>a[i];
// 		}
// 		while(q--){
// 			int l, r;
// 			cin>>l>>r;
// 			int gc = 0;
// 			for(int i = 1;i< l;i++){
// 				gc = __gcd(gc, a[i]);
// 			}
// 			for(int j=r+1;j<=n;j++){
// 				gc = __gcd(gc, a[j]);
// 			}
// 			cout<<gc<<endl;
// 		}
// 	}
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		int a[n+10];
		int f[n+10];
		int b[n+10];
		b[0] = f[0] = b[n+1] = f[n+1] = 0;

		for(int i = 1;i<=n;++i){
			cin>>a[i];
		}
		for(int i = 1;i<=n;++i){
			f[i] = __gcd(a[i], f[i-1]);
			b[n+1-i] = __gcd(a[n-i+1], b[n+2-i]);
		}

		while(q--){
			int l, r;
			cin>>l>>r;
			cout<<__gcd(f[l-1], b[r+1])<<endl;
		}

	}
}
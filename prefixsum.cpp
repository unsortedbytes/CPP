// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int q;
// 	cin>>q;
// 	while(q--){
// 		int l, r;
// 		cin>>l>>r;
// 		long long int sum =0;
// 		for(int i = l-1;i<r;i++){
// 			sum+=arr[i];
// 		}
// 		cout<<sum<<endl;
// 	}
// }

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int hash[N];

int main(){
	int n;
	cin>>n;
	for(int i = 1;i<=n;++i){
		cin>>a[i];
		hash[i] = hash[i-1] + 1;
	}
	int q;
	cin>>q;
	while(q--){
		int l, r,
		cin>>l>>r;
		cout<<hash[r]-hash[l-1]<<endl;
	}
}
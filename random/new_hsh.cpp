// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e7 + 10;
// int a[N];
// int main(){
// 	int n, q;
// 	cin>>n>>q;
// 	while(q--){
// 		int l, r, v;
// 		cin>>l>>r>>v;
// 		for(int i = l ;i<=r;i++){
// 			a[i]+=v;
// 		}
// 	}
// 	int maxi=INT_MIN;
// 	for(int i =1 ;i<=n;i++){
// 		if(maxi<a[i]){
// 			maxi = a[i];
// 		}
// 	}
// 	cout<<maxi<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int a[N];

int main(){
	int n, q;
	cin>>n>>q;
	while(q--){
		int l, r, v;
		cin>>l>>r>>v;
		a[l]+=v;
		a[r+1]-=v;
	}
	int max=INT_MIN;
	for(int i =1;i<=n;i++){
		a[i]+=a[i-1];
		if(max<a[i]){
			max = a[i];
		}
	}
	cout<<max<<endl;
}
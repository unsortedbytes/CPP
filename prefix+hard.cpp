// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n, q;
// 		cin>>n>>q;
// 		string s;
// 		cin>>s;
// 		while(q--){
// 			int l, r;
// 			cin>>l>>r;
// 			int hsh[26];
// 			for(int i=0;i<26;i++){
// 				hsh[i]=0;
// 			}
// 			l--;r--;

// 			for(int i=l; i<=r;++i){
// 				hsh[s[i] - 'a'] ++;
// 			}

// 			int oddCt = 0;
// 			for(int i =0;i<26;++i){
// 				if(hsh[i]%2 != 0) oddCt++;
// 			}
// 			if(oddCt > 1) cout<<"NO\n";
// 			else cout<<"YES\n";
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
		string s;
		cin>>s;
		int hsh[27][n+1];
		for(int i =0;i< 27;i++){
			for(int j =0;j<n+1;j++){
				hsh[i][j]=0;
			}
		}
		for(int i =0;i<n;i++){
			hsh[s[i] - 'a'+1][i+1]++;
		}

		for(int i =1;i<27;i++){
			for(int j=1;j<n+1;j++){
				hsh[i][j]+=hsh[i][j-1];
			}
		}

		while(q--){
			int l, r;
			cin>>l>>r;
			int oddCt=0;
			for(int i = 1;i< 27;i++){
				int value = hsh[i][r]-hsh[i][l-1];
				if(value %2 !=0) oddCt++;
			}

			if(oddCt>1) {
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
		}
	}
}
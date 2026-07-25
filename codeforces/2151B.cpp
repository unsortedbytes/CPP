#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		// cout<<s<<endl;
		set<int> st;
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			st.insert(x);
		}

		// st.insert(1);
		// int current_pos = 1;
		// for(int i=0;i<n;i++){
		// 	current_pos++;
		// 	if(s[i]=='B'){
		// 		while(st.find(current_pos) !=st.end()){
		// 			current_pos++;
		// 		}
		// 	}
		// 	st.insert(current_pos);
		// }

		for(int i=0;i<n;i++){
			int start = 1;
			for(int j=0;j<=i;j++){
				start++;
				if(s[j]=='B'){
					while(start<=1e9 && st.find(start)!=st.end()){
						start++;
					}
				}
			}
			st.insert(start);
		}

		cout<<st.size()<<endl;
		for(auto x:st){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     while(t--){
//         int n,m;
//         cin >> n >> m;
//         string s;
//         cin >> s;
//         set<long long> st;
//         for(int i=0;i<m;i++){
//             long long x;
//             cin >> x;
//             st.insert(x);
//         }
//         int pos=1;
//         for(int i = 0; i < n; ++i){
//                 if(s[i] == 'A'){
//                     pos++;
//                 } else {
//                     pos++;
//                     while(st.count(pos)) pos++;
//                 }
//             st.insert(pos);
//         }

//         cout << st.size() << "\n";
//         for(auto x : st) cout << x << " ";
//         cout << "\n";
//     }
// }

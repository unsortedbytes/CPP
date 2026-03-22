#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n , c, k;
	cin>>n>>c>>k;
	vector<long  long> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(), arr.end());

 	for(int i = 0; i <n; i++){
   
        if(arr[i] <= c){
            long long diff = c - arr[i];

            if(k > 0){
                if(diff >= k){
                    c += k;
                    k = 0;
                } else {
                    c += diff;
                    k -= diff;
                }
            }

            c += arr[i];
        }
	}
	cout<<c<<endl;
};

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
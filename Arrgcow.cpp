#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int arr[N];
// int c;



bool isMinumDistancepos(int d, int n, int c){
    int last_pos = arr[0];
    int count = 1; // first cow placed at arr[0]

    for(int i = 1; i < n; i++){
        if(arr[i] - last_pos >= d){
            count++;
            last_pos = arr[i];
            if(count >= c) return true; // all cows placed
        }
    }
    return false;
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		memset(arr, 0, sizeof(arr)); 
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		sort(arr, arr+n);
		int lo=0;
		int hi=arr[n-1];
		int ans;
		while(lo <= hi){
		    int mid = (lo + hi) / 2;
		    if(isMinumDistancepos(mid,n,c)){
		        ans = mid;
		        lo = mid + 1; // try for bigger distance
		    } else {
		        hi = mid - 1; // try for smaller distance
		    }
		}


		cout<<ans<<endl;

	}
}
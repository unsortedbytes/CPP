#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string a,b;
	cin>>a>>b;

	int evenA = 0, evenB = 0;
	int onesA = 0, onesB = 0;

	for (int i = 0; i < n; i++) {
	    if (a[i] == '1') {
	        onesA++;
	        if (i % 2 == 0) evenA++;
	    }

	    if (b[i] == '1') {
	        onesB++;
	        if (i % 2 == 0) evenB++;
	    }
	}

	if (onesA == onesB && evenA == evenB)
	    cout << "YES\n";
	else
	    cout << "NO\n";
	}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int t;cin>>t;
	while(t--) solve();
}
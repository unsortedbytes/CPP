#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int sixseven = n;

    for (int i = 0; i < n; ++i) {
        int left_count = lower_bound(a.begin(), a.end(), a[i]) - a.begin();
        int right_count = a.end() - upper_bound(a.begin(), a.end(), a[i]);
        
        sixseven = min(sixseven, max(left_count, right_count));
    }

    cout << sixseven << "\n";
}

int main() {
    int t;
    // if (cin >> t) {
    //     while (t--) {
    //         solve();
    //     }
    // }
    cin>>t;
    while(t--){
    	solve();
    }
    return 0;
}
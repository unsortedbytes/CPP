#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    vector<pair<char,int>> runs;
    for (int i = 0; i < n; i++) {
        if (!runs.empty() && runs.back().first == s[i]) runs.back().second++;
        else runs.push_back({s[i], 1});
    }

    int k = runs.size();
    int reduction = 0;
    for (int j = 1; j + 1 < k; j++) {          // interior runs only — can't delete first/last
        if (runs[j].second == 1) {
            if (runs[j-1].first == runs[j+1].first) { reduction = 2; break; }  // merge case
            else reduction = max(reduction, 1);
        }
    }
    cout << (k - reduction) << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
}
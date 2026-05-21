#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Store all indices where a strict drop occurs
    vector<int> inv;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            inv.push_back(i);
        }
    }

    // Already sorted
    if (inv.empty()) {
        cout << "YES\n";
        return;
    }

    // If two drops are adjacent, we can't transition back to Set 0
    for (int i = 0; i < (int)inv.size() - 1; i++) {
        if (inv[i + 1] == inv[i] + 1) {
            cout << "NO\n";
            return;
        }
    }

    // L is the minimum k required to fix all drops
    int L = 0;
    for (int i : inv) {
        L = max(L, a[i] - a[i + 1]);
    }

    // R is the maximum k allowed so we can safely transition back between drops
    int R = 2e9; 
    for (int x = 0; x < (int)inv.size() - 1; x++) {
        int start = inv[x] + 1;
        int end = inv[x + 1] - 1;
        
        int max_jump = -2e9;
        // Find the most generous transition point in the gap
        for (int j = start; j <= end; j++) {
            max_jump = max(max_jump, a[j + 1] - a[j]);
        }
        R = min(R, max_jump);
    }

    if (L <= R) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
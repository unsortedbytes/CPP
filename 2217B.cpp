#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int p;
    cin >> p;
    p--; // 0-based

    int x = a[p];
    int ans = 0;

    // LEFT side
    for (int i = p - 1; i >= 0; ) {
        if (a[i] != x) {
            ans++;
            int val = a[i];
            while (i >= 0 && a[i] == val) i--;
        } else {
            i--;
        }
    }

    // RIGHT side
    for (int i = p + 1; i < n; ) {
        if (a[i] != x) {
            ans++;
            int val = a[i];
            while (i < n && a[i] == val) i++;
        } else {
            i++;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
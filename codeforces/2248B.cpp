#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        if (n < 2 * m) {
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (a[i] > b[i]) { ok = false; break; }
        }
        if (ok) {
            for (int i = 0; i < m; i++) {
                if (a[n - m + i] < b[i]) { ok = false; break; }
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}
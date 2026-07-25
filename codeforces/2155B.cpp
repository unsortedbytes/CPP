#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        

        if ((n*n)-k<4) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<string> grid(n, string(n, 'L'));
        int remaining = k;
        for (int i = 0; i < n && remaining > 0; i++) {
            for (int j = 0; j < n && remaining > 0; j += 2) {
                grid[i][j] = 'U'; // escapable
                remaining--;
            }
        }
        for (auto &row : grid) cout << row << "\n";
    }
}

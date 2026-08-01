#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int m = 2 * n;
    vector<int> a(m + 1);
    vector<array<int,2>> pos(n + 1, {-1, -1});
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
        if (pos[a[i]][0] == -1) pos[a[i]][0] = i;
        else pos[a[i]][1] = i;
    }

    vector<int> order(n);
    iota(order.begin(), order.end(), 1);
    sort(order.begin(), order.end(), [&](int x, int y){
        return (pos[x][1] - pos[x][0]) > (pos[y][1] - pos[y][0]); // span desc
    });

    vector<char> alive(m + 2, 1);
    long long score = 0;
    for (int v : order) {
        int l = pos[v][0], r = pos[v][1];
        if (alive[l] && alive[r]) {
            long long len = r - l + 1;
            score += len * len;
            for (int i = l; i <= r; i++) alive[i] = 0; // ranges are disjoint => O(n) total
        } else if (alive[l] || alive[r]) {
            score += 1; // forced singleton
        }
        // both dead -> fully absorbed, contributes 0
    }
    cout << score << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}
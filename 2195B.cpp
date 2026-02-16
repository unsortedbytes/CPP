#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> visited;
vector<int> comp;

void dfs(int node) {
    visited[node] = 1;
    comp.push_back(node);

    for (int v : g[node]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        g.assign(n + 1, {});
        visited.assign(n + 1, 0);

        // Build graph
        for (int i = 1; i <= n; i++) {
            if (2 * i <= n) {
                g[i].push_back(2 * i);
                g[2 * i].push_back(i);
            }
        }

        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                comp.clear();
                dfs(i);

                vector<int> indices = comp;
                vector<int> values;

                for (int idx : comp)
                    values.push_back(a[idx]);

                sort(indices.begin(), indices.end());
                sort(values.begin(), values.end());

                if (indices != values) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
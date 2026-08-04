#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

void solve() {
    int n;
    cin >> n;

    vector<pair<int64,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    // Compress equal shadows
    vector<int64> shadow;
    vector<int> cnt;

    vector<int> group(n);

    for (int i = 0; i < n;) {
        int j = i;
        while (j < n && v[j].first == v[i].first) j++;

        shadow.push_back(v[i].first);
        cnt.push_back(j - i);

        for (int k = i; k < j; k++)
            group[k] = (int)shadow.size() - 1;

        i = j;
    }

    int m = shadow.size();

    if (shadow[0] != 0) {
        cout << -1 << '\n';
        return;
    }

    vector<int64> val(m);

    if (m == 1) {
        val[0] = 1;
    } else {
        int64 prefix = 0;

        for (int i = 1; i < m; i++) {
            int64 need = shadow[i] - prefix;

            if (need <= 0 || need % cnt[i - 1] != 0) {
                cout << -1 << '\n';
                return;
            }

            val[i - 1] = need / cnt[i - 1];

            if (i > 1 && val[i - 1] <= val[i - 2]) {
                cout << -1 << '\n';
                return;
            }

            prefix += 1LL * cnt[i - 1] * val[i - 1];
        }

        val[m - 1] = val[m - 2] + 1;
    }

    vector<int64> ans(n);

    for (int i = 0; i < n; i++) {
        ans[v[i].second] = val[group[i]];
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();

    return 0;
}
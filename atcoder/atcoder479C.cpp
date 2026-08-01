#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    vector<int> xs;
    xs.reserve(n);
    for (int i = 0; i < n; ++i)
        if (s[i] == 'x') xs.push_back(i + 1);   // 1-indexed position

    int m = (int)xs.size();

    string out;
    out.reserve(n * 7);
    char buf[12];
    for (int k = 1; k <= n; ++k) {
        int ans = (k <= m ? xs[k - 1] : n);
        int len = snprintf(buf, sizeof(buf), "%d\n", ans);
        out.append(buf, len);
    }
    cout << out;
    return 0;
}
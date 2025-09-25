#include <bits/stdc++.h>
using namespace std;

long long min_cost(vector<int> &pos) {
    int k = pos.size();
    if (k <= 1) return 0;
    vector<long long> d(k);
    for (int i = 0; i < k; i++) {
        d[i] = pos[i] - i;
    }
    sort(d.begin(), d.end());
    long long median = d[k/2];
    long long cost = 0;
    for (int i = 0; i < k; i++) {
        cost += abs(d[i] - median);
    }
    return cost;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> posA, posB;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') posA.push_back(i);
            else posB.push_back(i);
        }

        long long ans = min(min_cost(posA), min_cost(posB));
        cout << ans << "\n";
    }
}

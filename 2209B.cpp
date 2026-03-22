#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        vector<pair<long long, int>> events;
        int current_ans = 0;
        int count_j = 0;

        for (int j = i + 1; j < n; j++) {
            if (a[j] == a[i]) continue;
            count_j++;
            if (a[j] > a[i]) {
                // k > (ai + aj) / 2
                long long mid = (a[i] + a[j]);
                long long k_min = (mid >= 0) ? (mid / 2 + 1) : ((mid - 1) / 2 + 1);
                events.push_back({k_min, 1}); // Start of "closer to aj"
            } else {
                // k < (ai + aj) / 2
                long long mid = (a[i] + a[j]);
                long long k_max = (mid >= 0) ? ((mid - 1) / 2) : (mid / 2 - 1);
                events.push_back({k_max + 1, -1}); // End of "closer to aj"
                current_ans++; // Assume k is -infinity, then it's closer to all a_j < a_i
            }
        }

        sort(events.begin(), events.end());
        int max_val = current_ans;
        for (auto &e : events) {
            current_ans += e.second;
            max_val = max(max_val, current_ans);
        }
        cout << max_val << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
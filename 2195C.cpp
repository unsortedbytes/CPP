#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Problem: Min operations to make a dice roll sequence.
 * Logic: Maximize the number of elements kept. 
 * A value v at index i can follow any u at i-1 
 * as long as u != v and u != 7-v.
 */
void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // dp[v] = max elements kept ending with face v
    // We use a 7-element array to use 1-based indexing for convenience.
    vector<int> dp(7, 0);

    for (int i = 0; i < n; i++) {
        vector<int> next_dp(7, 0);
        int current_val = a[i];

        for (int v = 1; v <= 6; v++) {
            int max_from_prev = 0;
            
            // Check all possible previous faces u
            for (int u = 1; u <= 6; u++) {
                // Rule: Adjacent sides cannot be same or opposite (sum to 7)
                if (u != v && u != (7 - v)) {
                    max_from_prev = max(max_from_prev, dp[u]);
                }
            }
            
            // If the current face v matches a[i], we increment the 'kept' count.
            // Even if it doesn't match, we could still transition to v by changing a[i].
            // However, the problem asks for MIN operations, so we only care about 
            // cases where we either keep a[i] or change it to something that 
            // helps us keep more elements later.
            
            // Base case for the first element: max_from_prev starts at 0.
            if (i == 0) {
                next_dp[v] = (v == current_val ? 1 : 0);
            } else {
                next_dp[v] = max_from_prev + (v == current_val ? 1 : 0);
            }
        }
        dp = next_dp;
    }

    int max_kept = 0;
    for (int v = 1; v <= 6; v++) max_kept = max(max_kept, dp[v]);

    cout << n - max_kept << "\n";
}

int main() {
    // Fast I/O is essential for 3e5 input size
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long s, k, m;
    if (!(cin >> s >> k >> m)) return;

    // Calculate how many times Vadim flipped the hourglass
    long long num_flips = m / k;
    
    // Calculate the time elapsed since the very last flip
    long long time_after_last_flip = m % k;

    long long sand_in_top;

    if (num_flips % 2 == 1) {
        /* After an odd number of flips (1, 3, 5...):
           The sand that fell into the bottom during the first k-minute 
           interval is now in the top. This is min(s, k).
        */
        sand_in_top = min(s, k);
    } else {
        /* After an even number of flips (0, 2, 4...):
           The hourglass is in its original orientation.
           All sand (s) is effectively back in the top bulb.
        */
        sand_in_top = s;
    }

    // The sand continues to fall for whatever is left in the top 
    // minus the time that passes before Vadim leaves.
    long long remaining_sand = max(0LL, sand_in_top - time_after_last_flip);
    
    cout << remaining_sand << endl;
}

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
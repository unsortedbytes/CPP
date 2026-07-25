#include<bits/stdc++.h>
using namespace std;

int solve(int firstParity) {
    vector<int> p(n + 1);
    p[1] = firstParity;

    for (int i = 2; i <= n; i++)
        p[i] = p[i - 1] ^ b[i - 1];

    int cost = 0;

    for (int i = 1; i <= n; i++)
        if ((a[i] & 1) != p[i])
            cost++;


    return cost;
}

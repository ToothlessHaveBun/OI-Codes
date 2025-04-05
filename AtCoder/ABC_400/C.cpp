#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX
#define endl "\n"

using namespace std;
/*
    toothless. #17
    @fredcss_dev
*/


signed main() {
    int N;
    cin >> N;

    int cnt = 0;
    int mx = 0;
    int current = 1;

    while (current <= N) {
        current *= 2;
        mx++;
    }
    mx--;

    for (int e = 1; e <= mx; ++e) {
        int m = N / (1 << e);
        if (m < 1) {
            continue;
        }
        int mx2 = sqrt(m);
        int cnt = (mx2 + 1) / 2;
        cnt += cnt;
    }

    cout << cnt << endl;

    return 0;
}
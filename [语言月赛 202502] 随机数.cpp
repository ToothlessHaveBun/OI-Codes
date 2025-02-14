#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX

using namespace std;
const lo N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

signed main() {
    lo n, L, R;
    cin >> n >> L >> R;
    lo S = L;
    lo k = S / n;
    lo r = S % n;
    vector<lo> ans(n, k);
    for (lo i = 0; i < r; ++i) {
        ans[i] += 1;
    }
    for (lo i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
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
    int N, M;
    cin >> N >> M;
    
    if (N == 1) {
        lo total = M + 1LL;
        if (total > 1e9) {
            cout << "inf" << endl;
        } else {
            cout << total << endl;
        }
    } else {
        lo sum = 0;
        lo cur = 1;
        bool f = false;
        for (int i = 0; i <= M; ++i) {
            sum += cur;
            if (sum > 1e9) {
                f = true;
                break;
            }
            if (i == M) {
                break;
            }
            if (cur > 1e9 / N) {
                f = true;
                break;
            }
            lo next = cur * N;
            if (next > (1e9 - sum)) {
                f = true;
                break;
            }
            cur = next;
        }
        if (f) {
            cout << "inf" << endl;
        } else {
            cout << sum << endl;
        }
    }
    return 0;
}

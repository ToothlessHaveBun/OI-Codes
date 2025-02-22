#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

signed main() {
    int X, Y, K;
    cin >> X >> Y >> K;

    int mx = -1;
    int count = 0;
    for (int b = 0; b <= X; ++b) {
        for (int p = 1; p <= Y; ++p) {
            for (int z = 0; z <= K; ++z) {
                int d = (b + p) ^ z;
                if (d > mx) {
                    mx = d;
                    count = 1;
                } else if (d == mx) {
                    ++count;
                }
            }
        }
    }

    cout << mx << endl;
    cout << count << endl;

    return 0;
}
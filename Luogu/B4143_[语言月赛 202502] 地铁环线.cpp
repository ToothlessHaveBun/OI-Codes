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
    lo n, x, y;
    cin >> n >> x >> y;
    lo cw = (y - x + n) % n;
    lo cnt = n - cw;
    if (cw < cnt) {
        cout << "Clockwise Loop" << endl;
    } else if (cw > cnt) {
        cout << "Counter-clockwise Loop" << endl;
    } else {
        cout << "\"Wonderful\"" << endl;
    }

    return 0;
}

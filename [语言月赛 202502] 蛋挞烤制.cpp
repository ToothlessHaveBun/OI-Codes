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
    lo V_egg, V_milk, V_tart;
    lo e, m, t;
    cin >> V_egg >> V_milk >> V_tart;
    cin >> e >> m >> t;
    lo total_volume = V_egg * e + V_milk * m;
    lo num_tarts = (total_volume + V_tart - 1) / V_tart;
    lo batches = (num_tarts + t - 1) / t;
    cout << batches << endl;
    return 0;
}
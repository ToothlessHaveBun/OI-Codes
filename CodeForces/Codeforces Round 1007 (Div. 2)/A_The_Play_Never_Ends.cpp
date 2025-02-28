#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX
#define endl "\n"

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

int t, k;

bool wczffl_503(int k) {
    return (k % 3 == 1);
}

signed main() {
    cin >> t;
    while (t--){
        cin >> k;
        if (wczffl_503(k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
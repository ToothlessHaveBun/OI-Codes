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

bool f(lo x) {
    if (x < 0) return false;
    lo root = sqrtl(x);
    return root * root == x;
}

void wczffl_503() {
    int n;
    cin >> n;
    lo total = 1LL * n * (n + 1) / 2;
    if (f(total)) {
        cout << "-1\n";
        return;
    }
    vector<lo> s(n + 1);
    for (int i = 1; i <= n; ++i) {
        s[i] = (2LL * n - i + 1) * i / 2;
    }
    vector<bool> jhd(n + 1, false);
    for (int i = 1; i <= n - 1; ++i) {
        if (f(s[i])) {
            jhd[i] = true;
        }
    }
    bool bad = false;
    for (int i = 1; i <= n; ++i) {
        lo now = s[i];
        if (i <= n - 1 && jhd[i]) {
            now--;
        }
        if (f(now)) {
            bad = true;
            break;
        }
    }
    if (bad) {
        cout << "-1\n";
        return;
    }
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        p[i] = n - i;
    }
    for (int i = 1; i <= n - 1; ++i) {
        if (jhd[i]) {
            swap(p[i - 1], p[i]);
        }
    }
    for (int x : p) {
        cout << x << ' ';
    }
    cout << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--) {
        wczffl_503();
    }
    return 0;
}
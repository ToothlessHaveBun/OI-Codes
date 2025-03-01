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

int wczffl_503(int N, vector<int>& A) {
    for (int i = 0; i < N - 1; ++i) {
        if (A[i] == A[i + 1]) {
            return 2;
        }
    }
    unordered_map<int, vector<int>> pos;
    for (int i = 0; i < N; ++i) {
        pos[A[i]].push_back(i);
    }
    int mn = INT_MAX;
    for (const auto& entry : pos) {
        const vector<int>& vt = entry.second;
        if (vt.size() < 2) continue;
        
        for (size_t i = 0; i < vt.size() - 1; ++i) {
            int now = vt[i + 1] - vt[i] + 1;
            if (now < mn) {
                mn = now;
            }
        }
    }
    return (mn != INT_MAX) ? mn : -1;
}

int N;

signed main() {
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int res = wczffl_503(N, A);
    cout << res;
    return 0;
}
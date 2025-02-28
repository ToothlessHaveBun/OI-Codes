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
    int N, M;
    cin >> N >> M;

    vector<vector<char> > S(N, vector<char>(N));
    vector<vector<char> > T(M, vector<char>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> S[i][j];
        }
    }
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> T[i][j];
        }
    }
    for (int a = 0; a <= N - M; ++a) {
        for (int b = 0; b <= N - M; ++b) {
            bool match = true;
            for (int i = 0; i < M; ++i) {
                for (int j = 0; j < M; ++j) {
                    if (S[a + i][b + j] != T[i][j]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) {
                cout << a + 1 << " " << b + 1 << endl;
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
#define lo long long
#define InF InT_MAX
#define LLM LOnG_LOnG_MAX
#define endl "\n"

using namespace std;
/*
    toothless. #17
    @fredcss_dev
*/

int n;

void wczffl_503()
{
    vector<vector<char>> grid(n, vector<char>(n, '.'));
    for (int i = 1; i <= n; ++i) {
        int j = n + 1 - i;
        if (i > j) continue;

        char fillChar = (i % 2 == 1) ? '#' : '.';

        for (int k = i - 1; k < j; ++k) {
            for (int l = i - 1; l < j; ++l) {
                grid[k][l] = fillChar;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

signed main() {
    cin >> n;
    wczffl_503();
    return 0;
}
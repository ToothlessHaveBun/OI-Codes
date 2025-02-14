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

int n, m, s, t;
double ma[101][101], dp[101][101];

struct Node {
    int x, y;
} a[101];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x >> a[i].y;
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int c, d;
        cin >> c >> d;
        double k = sqrt(double(pow((a[c].x - a[d].x), 2)) + double(pow((a[c].y - a[d].y), 2)));
        ma[c][d] = k;
        ma[d][c] = k;
    }
    cin >> s >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (ma[i][j]) {
                dp[i][j] = ma[i][j];
            } else {
                dp[i][j] = INT_MAX;
            }
        }
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    printf("%.2lf", dp[s][t]);
}

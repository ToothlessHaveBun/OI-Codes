#include <bits/stdc++.h>
#define lo long long
#define LLM LONG_LONG_MAX
#define endl "\n"

using namespace std;
/*
    toothless. #17
    @fredcss_dev
*/

const lo INF = 1e9;
const lo dx[] = {1, 0, -1, 0};
const lo dy[] = {0, 1, 0, -1};

signed main() {
    lo H, W;
    cin >> H >> W;
    vector<string> g(H);
    for (lo i = 0; i < H; ++i) {
        cin >> g[i];
    }

    lo A, B, C, D;
    cin >> A >> B >> C >> D;
    --A, --B, --C, --D;

    vector<vector<lo>> dist(H, vector<lo>(W, INF));
    deque<pair<lo, lo>> q;
    dist[A][B] = 0;
    q.epb(A, B);

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop_front();
        if (x == C && y == D) {
            cout << dist[x][y] << '\n';
            return 0;
        }

        for (lo i = 0; i < 4; ++i) {
            lo nx = x + dx[i];
            lo ny = y + dy[i];
            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            if (g[nx][ny] == '.') {
                if (dist[nx][ny] > dist[x][y]) {
                    dist[nx][ny] = dist[x][y];
                    q.epf(nx, ny);
                }
            } else {
                for (lo j = 1; j <= 2; ++j) {
                    lo tx = x + j * dx[i];
                    lo ty = y + j * dy[i];
                    if (tx < 0 || tx >= H || ty < 0 || ty >= W) break;
                    if (g[tx][ty] == '.') break;
                    if (dist[tx][ty] > dist[x][y] + 1) {
                        dist[tx][ty] = dist[x][y] + 1;
                        q.epb(tx, ty);
                    }
                }
            }
        }
    }

    cout << -1 << '\n';
    return 0;
}
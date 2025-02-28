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

bool f(int h, int w, vector<string>& g)
{
    int top = h, b = -1, l = w, r = -1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (g[i][j] == '#') {
                top = min(top, i);
                b = max(b, i);
                l = min(l, j);
                r = max(r, j);
            }
        }
    }
    if (b == -1) return true;
    for (int i = top; i <= b; i++) {
        for (int j = l; j <= r; j++) {
            if (g[i][j] == '.') return false;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (i < top || i > b || j < l || j > r) {
                if (g[i][j] == '#') return false;
            }
        }
    }
    return true;
}

signed main()
{
    int h, w;
    cin >> h >> w;
    if (h == 1 && w == 1) {
        puts("Yes");
        return 0;
    }
    vector<string> g(h);
    for (int i = 0; i < h; i++) {
        cin >> g[i];
    }
    if (f(h, w, g)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
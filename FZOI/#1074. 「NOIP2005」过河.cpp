#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
#define debug$ if(dev)
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;
const bool dev = false;

int f[N], far[N], a[N], flag[N], p, s, t, n;

signed main()
{
    cin >> p;
    cin >> s >> t >> n;
    if (s == t) {
        int cont = 0, q;
        for (int i = 1; i <= n; i++) {
            cin >> q;
            cont += ((q % s) == 0);
        }
        cout << cont;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    a[0] = 0;
    f[0] = 0;
    far[n + 1] = min(int(p - a[n]), 100);
    p = 0;
    for (int i = 1; i <= n; i++) {
        far[i] = min(a[i] - a[i - 1], 90);
        p += far[i], flag[p] = 1;
    }
    p += far[n + 1];
    for (int i = 1; i <= p + 9; i++) {
        f[i] = IMX - 1;
        for (int j = s; j <= t; j++) {
            if(i >= j) f[i] = min(f[i], f[i - j] + flag[i]);
        }
    }
    int mn = INT_MAX - 1;
    for (int i = p; i <= p + 9; i++) mn = min(mn, f[i]);
    cout << mn;
    return 0;
}
#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int n, m;
int a[100050], dpmax[50005][22], dpmin[50005][21];
int LOG[50005];
void build()
{
    LOG[0] = -1;
    for (int i = 1; i <= 50005; i++)
        LOG[i] = LOG[i >> 1] + 1;
    for (int i = 1; i <= n; i++)
    {
        dpmin[i][0] = dpmax[i][0] = a[i];
    }
    int p = log2(n);
    for (int k = 1; k <= p; k++)
    {
        for (int s = 1; s + (1 << k) <= n + 1; s++)
        {
            dpmax[s][k] = max(dpmax[s][k - 1], dpmax[s + (1 << (k - 1))][k - 1]);
            dpmin[s][k] = min(dpmin[s][k - 1], dpmin[s + (1 << (k - 1))][k - 1]);
        }
    }
}
int query(int l, int r)
{
    int k = LOG[r - l + 1];
    int x = max(dpmax[l][k], dpmax[r - (1 << k) + 1][k]);
    int y = min(dpmin[l][k], dpmin[r - (1 << k) + 1][k]);
    return x - y;
}

signed main()
{
    "toothless. #17";
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build();
    for (int i = 1; i <= m; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << query(l, r) << endl;
    }
    return 0;
}
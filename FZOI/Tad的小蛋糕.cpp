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
int a[1000000];
int qzh[1000000];
int st[1000000][25];
int lg[1000000];

void init()
{
    lg[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        lg[i] = lg[i / 2] + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        st[i][0] = qzh[i];
    }
    for (int k = 1; k <= lg[m]; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            st[i][k] = max(st[i][k - 1], st[min(i + (1 << (k - 1)), n)][k - 1]);
        }
    }
}  // ST表模板 -> 初始化
int quary(int l, int r)
{
    int k = lg[r - l + 1];
    return max(st[l][k], st[r - (1 << k) + 1][k]);
}  // ST表模板 ->  求最大
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        qzh[i] = qzh[i - 1] + a[i];
    }
    int maxl = -INT_MIN;
    init();
    for (int i = 1; i <= n; i++)
    {
        int r = min(i + m - 1, n);
        int s = quary(i, r) - qzh[i - 1];
        maxl = max(maxl, s);
    }
    cout << maxl;
    return 0;
}
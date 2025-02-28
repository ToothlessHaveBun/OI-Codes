#include <bits/stdc++.h>
#define lo long long
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
    <2025/1/21>
*/

int m, n, d[N], w, v;

signed main()
{
	cin >> m >> n;
    for(int i = 1; i <= n; i++) {
        cin >> v >> w;
        for(int j = m; j >= v; j--){
            d[j] = max(d[j], d[j - v] + w * v);
        }
    }
    printf("%d",d[m]);
    return 0;
}
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

int w, ans = 0;
int n, a[N];
int l, r;

signed main()
{
    cin >> w >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    l = 1;
    r = n;
    while (l <= r) {
        if (a[l] + a[r] <= w) {
            l++, r--, ans++;
        } else {
            r--, ans++;
        }
    }
    cout << ans;
    return 0;
}
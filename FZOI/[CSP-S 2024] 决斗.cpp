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

int n;
int a[N], cnt[N];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	cnt[a[i]]++;
    }
    int hui = 0, ans = 0;
    for (int i = N - 1; i >= 1; i--) {
    	ans += min(cnt[i], hui);
    	hui = max(hui, cnt[i]);
    }
    cout << n - ans;
    return 0;
}

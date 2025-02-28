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

int n, k;
int a[N];
int ans=0;

bool isPrime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

void dfs(int x, int sum, int cnt)
{
    if (x == k) {
        if (isPrime(sum))
            ans++;
        return;
    }
    for (int i = cnt; i < n; i++) {
        dfs(x + 1, sum + a[i], i + 1);
    }
}

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(0, 0, 0);
    cout << ans << endl;
    return 0;
}`
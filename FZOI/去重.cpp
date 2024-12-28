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
int a[N];
map<int, bool> mp;

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i ++ ) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i ++ ) {
        if (!mp[a[i]]) {
            cout << a[i] << " ";
            mp[a[i]] = true;
        }
    }
    return 0;
}
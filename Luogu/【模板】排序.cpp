#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int a[N];

signed main()
{
    int n;
    cin >> n ;
    for(int i = 1; i <= n; i ++ ) cin >> a[i] ;
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i ++ ) cout << a[i] << " " ;
    return 0;
}
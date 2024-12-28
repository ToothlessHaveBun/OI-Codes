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
double a[M][M];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1; j++) cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++) {
        int flag = 1;
        for (int j = i; j <= n; j++)
        {
            if (fabs(a[j][i]) > 1e-8) {
                flag = 0;
                for (int k = 1; k <= n + 1; k ++ ) swap(a[i][k], a[j][k]);
                break;
            }
        }
        if (flag) {
            cout << "No Solution" << endl ;
            return 0;
        }
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                double rate = a[j][i] / a[i][i];
                for (int k = i; k <= n + 1; k++) a[j][k] -= a[i][k] * rate;
            }
        }
    }
    for (int i = 1; i <= n; i++) printf("%.2lf\n", a[i][n + 1] / a[i][i]);
    return 0;
}
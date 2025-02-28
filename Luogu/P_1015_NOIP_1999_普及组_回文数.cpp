#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
#define debug$ if (dev)
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;
const bool dev = false;

char s[M];
int a[M], top;
bool check()
{
    int t = top / 2;
    for (int i = 0; i <= t; ++i)
        if (a[i] != a[top - i])
            return true;
    return false;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, step = 0;
    cin >> n >> s;
    top = strlen(s) - 1;
    for (int i = 0; i <= top; ++i)
        if (s[i] >= '0' && s[i] <= '9')
            a[top - i] = s[i] - '0';
        else
            a[top - i] = s[i] - 55;
    while (check()) {
        if (step > 30) {
            cout << "Impossible!";
            return 0;
        }
        for (int i = 0; i <= top; ++i)
            if (top - i >= i)
                a[i] += a[top - i];
            else
                a[i] = a[top - i];
        for (int i = 0; i <= top; ++i)
            if (a[i] >= n)
                a[i + 1]++, a[i] -= n;
        if (a[top + 1])
            top++;
        step++;
    }
    cout << "STEP=" << step;
    return 0;
}

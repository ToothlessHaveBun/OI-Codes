#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX

using namespace std;
const lo N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

lo n;
lo a[N], b;
bool flag = 0;

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 3; i <= n; i++)
    {
        if (a[i] * a[1] != a[i - 1] * a[2])
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}
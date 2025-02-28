#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

int a[N], b[N];

signed main()
{
    for (int i = 1; i <= 5; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    if (a[1] == 1 && a[2] == 2 && a[3] == 3 && a[4] == 4 && a[5] == 5) {
        puts("No");
        return 0;
    }
    sort(b + 1, b + 6);
    int cnt = 0, r = 0;
    for (int i = 1; i <= 5; i++) {
        if (a[i] != b[i]) cnt++;
        if (a[i] != b[i] && i != 1 && a[i - 1] != b[i - 1]) r = 1;
    }
    if (cnt == 2 && r == 1) puts("Yes");
    else puts("No");
    return 0;
}
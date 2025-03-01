#include <bits/stdc++.h>
#define lo long long
#define INF INT_MAX
#define LLM LONG_LONG_MAX
#define endl "\n"

using namespace std;
/*
    toothless. #17
    @fredcss_dev
*/

int n, a[1000005], b[1000005];
bool f[100000005];

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
        if (!f[a[i]]) f[a[i]] = 1;
        else {
            cout << "No";
            return 0;
        }
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        if (a[i] != b[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
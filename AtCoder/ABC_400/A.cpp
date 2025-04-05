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

int a;

signed main()
{
    cin >> a;
    if (400 % a == 0) cout << 400 / a;
    else cout << -1;
    return 0;
}
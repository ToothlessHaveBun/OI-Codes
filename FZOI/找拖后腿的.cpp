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

struct stu
{
    int id, sc;
} name[N];


int g;

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        name[i].id = i;
        cin >> name[i].sc;
        g += name[i].sc;
    }
    g /= n;
    for (int i = 1; i <= n; i++) {
        if(name[i].sc < g) cout << name[i].id << " ";
    }
    return 0;
}
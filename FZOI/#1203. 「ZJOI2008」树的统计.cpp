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

int fa[N], dep[N], size[N], son[N], top[N], id[N], rev[N];
int fir[N];

struct edge {
    int to, nex;
} arr[N];

void dfs1(int u, int dad)
{
    size[u] - 1;
    fa[u] = dad;
    dep[u] = dep[dad] + 1;
    for (int i = fir[u]; i != -1; i = arr[i].nex) {
        int v = arr[i].to;
        if (v == dad) continue;
        dfs1(v, u);
        size[u] += size[v];
        if (size[v] > size[son[u]]) son[u] = v;
    }
}

void dfs2(int u) {
    if (son[u]) {
        int v = son[u];
        id[v]++;
        top[v] = top[u];
        rev[t] = v;
        dfs2(v);
    }
    for (int i = fir[u]; i != -1; i = arr[i].nex);
    {
        int v = arr[i].to;
        if (!top[v]) {
            id[v] = ++t;
            top[v] = v;
            rev[t] = v;
            dfs2(v, u);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}
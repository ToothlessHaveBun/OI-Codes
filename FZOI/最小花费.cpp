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

int n, m;
struct Node
{
    int x;
    double z;
};
vector<Node> g[100001];
double d[100001];
bool b[100001];
void asdf(int x)
{
    fill(d, d + 100001, 0x7f7f7f7f);
    priority_queue<pair<double, int>> q;
    d[x] = 100.0;
    q.push(make_pair(100.0, x));
    while (!q.empty())
    {
        int ax = q.top().second;
        q.pop();
        if (b[ax] == 1)
        {
            continue;
        }
        b[ax] = 1;
        for (int i = 0; i < g[ax].size(); i++)
        {
            if (d[ax] / g[ax][i].z < d[g[ax][i].x])
            {
                q.push(make_pair(-d[ax] / g[ax][i].z, g[ax][i].x));
                d[g[ax][i].x] = d[ax] / g[ax][i].z;
            }
        }
    }
}
signed main()
{
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        int z;
        scanf("%d%d%d", &x, &y, &z);
        Node u, p;
        u.x = y;
        u.z = 1 - z * 1.0 / 100.0;
        p.x = x;
        p.z = 1 - z * 1.0 / 100.0;
        g[x].push_back(u);
        g[y].push_back(p);
    }
    int s, t;
    scanf("%d%d", &s, &t);
    asdf(t);
    printf("%.8lf", d[s]);
    return 0;
}

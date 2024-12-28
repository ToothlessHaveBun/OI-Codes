#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;
int n, m;
char a[55][55];
int fx[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
struct node
{
    int x;
    int y;
    int cnt;
};
int water[55][55];
bool h_used[55][55];
queue<node> Water;
node startt, endd;
queue<node> Q;
node X[2505];
int xid;
void Water_Bfs()
{
    while (!Water.empty())
    {
        node noww = Water.front();
        Water.pop();
        noww.cnt++;
        for (int i = 0; i < 4; i++)
        {
            node _next = noww;
            _next.x += fx[i][0], _next.y += fx[i][1];
            if (_next.x < 1 || _next.y < 1 || _next.x > n || _next.y > m)
                continue;
            if (h_used[_next.x][_next.y])
                continue;
            water[_next.x][_next.y] = min(water[_next.x][_next.y], _next.cnt);
            Water.push(_next);
            h_used[_next.x][_next.y] = 1;
        }
    }
}
void Ans_Bfs()
{
    Q.push(startt);
    while (!Q.empty())
    {
        node noww = Q.front();
        Q.pop();
        if (water[noww.x][noww.y] <= noww.cnt)
            continue;
        if (noww.x == endd.x && noww.y == endd.y)
        {
            cout << noww.cnt;
            return;
        }
        noww.cnt++;
        for (int i = 0; i < 4; i++)
        {
            node _next = noww;
            _next.x += fx[i][0], _next.y += fx[i][1];
            if (_next.x < 1 || _next.y < 1 || _next.x > n || _next.y > m)
                continue;
            if (h_used[_next.x][_next.y])
                continue;
            if (a[_next.x][_next.y] == 'X')
                continue;
            Q.push(_next);
            h_used[_next.x][_next.y] = 1;
        }
    }
    cout << "KAKTUS";
}
signed main()
{
    memset(water, 127, sizeof(water));
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == 'S')
            {
                startt.x = i;
                startt.y = j;
                startt.cnt = 0;
            }
            if (a[i][j] == 'D')
            {
                endd.x = i;
                endd.y = j;
            }
            if (a[i][j] == 'X')
            {
                X[xid].x = i;
                X[xid++].y = j;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '*')
            {
                node w;
                w.x = i;
                w.y = j;
                w.cnt = 0;
                Water.push(w);
                water[i][j] = 0;
                memset(h_used, 0, sizeof(h_used));
                h_used[endd.x][endd.y] = 1;
                for (int k = 0; k < xid; k++)
                {
                    h_used[X[k].x][X[k].y] = 1;
                }
                Water_Bfs();
            }
        }
    }
    water[endd.x][endd.y] = 1e8;
    memset(h_used, 0, sizeof(h_used));
    h_used[startt.x][startt.y] = 1;
    Ans_Bfs();
}
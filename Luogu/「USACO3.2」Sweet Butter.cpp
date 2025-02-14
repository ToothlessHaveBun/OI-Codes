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

int n;
int p;
int c;
int mp[800][805];
int d[805][805];
int mark[805];
const int inf = 9999999;
int res = inf;

signed main()
{
    cin >> n >> p >> c;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (i == j)
            {
                mp[i][j] = 0;
                d[i][j] = 0;
            }
            else
            {
                mp[i][j] = inf;
                d[i][j] = inf;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        mark[t - 1]++;
    }
    for (int i = 0; i < c; i++)
    {
        int u;
        int v;
        int val;
        scanf("%d%d%d", &u, &v, &val);
        mp[u - 1][v - 1] = val;
        mp[v - 1][u - 1] = val;
        d[u - 1][v - 1] = val;
        d[v - 1][u - 1] = val;
    }
    for (int k = 0; k < p; k++)
    {
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                    d[j][i] = d[i][j];
                }
            }
        }
    }
    for (int i = 0; i < p; i++)
    {
        int sum = 0;
        for (int j = 0; j < p; j++)
        {
            sum += d[i][j] * mark[j];
        }
        if (res > sum)
            res = sum;
    }
    printf("%d", res);
    return 0;
}
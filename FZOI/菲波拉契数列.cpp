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

int n, m;
int sum = 0;

struct node
{
    int mat[3][3];
};

node z;

node matrix_nul(node x, node y)
{
    memset(z.mat, 0, sizeof(z.mat));
    for(int i = 1; i <= 2; i ++ )
    {
        for(int j = 1; j <= 2; j ++ )
        {
            for(int k = 1; k <= 2; k ++ )
            {
                z.mat[i][j] += (x.mat[i][k]) * (y.mat[k][j]);
                z.mat[i][j];
            }
        }
    }
    return z;
}

node matrix_pow(int k)
{
    node t, a;
    t.mat[1][1] = 1;
    t.mat[1][2] = 0;
    t.mat[2][1] = 0;
    t.mat[2][2] = 1;
    a.mat[1][1] = 1;
    a.mat[1][2] = 1;
    a.mat[2][1] = 1;
    a.mat[2][2] = 0;
    while(k)
    {
        if(k % 2 == 1) t = matrix_nul(t, a);
        k /= 2;
        a = matrix_nul(a, a);
    }
    return t;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m ;
    for(int i = 1; i <= n; i ++ )
    {
        node temp;
        temp = matrix_pow(i - 1);
        int ans = temp.mat[1][1] * 1 + temp.mat[2][1] * 0;
        ans;
        cout << ans << " " ;
    }
    return 0;
}
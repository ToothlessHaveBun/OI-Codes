#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
#define debug$ if(dev)
using namespace std;

const int N = 1e7 + 10;
const int M = 2e3 + 5;
const bool dev = false;

/* toothless. #17 */

int a[N], b[N], c[N], d[N];
int total;
int n;

void print()
{
    if (total <= 2)
    {
        for (int k = 1; k <= n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
    total++;
}
void queen(int i)
{
    if (i > n)
    {
        print();
        return;
    }
    else
    {
        for (int j = 1; j <= n; j++)
        {
            if ((!b[j]) && (!c[i + j]) && (!d[i - j + n]))
            {
                a[i] = j;
                b[j] = 1;
                c[i + j] = 1;
                d[i - j + n] = 1;
                queen(i + 1);
                b[j] = 0;
                c[i + j] = 0;
                d[i - j + n] = 0;
            }
        }
    }
}
signed main()
{
    cin >> n;
    queen(1);
    cout << total;
    return 0;
}
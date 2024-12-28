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

long long now = 1;

bool a[N];

signed main()
{
	scanf("%d", &n);

	if (n % 2 != 0)
	{
		printf("-1");
		return 0;
	}
	int i = 0;
	while (now * 2 <= n)
	{
		now *= 2;
		i++;
	}
	int i1 = i;
	while (now > 1)
	{
		if (n - now >= 0)
		{
			a[i1] = 1;
			n -= now;
		}
		i1--;
		now /= 2;
	}
	for (int j = i; j >= 1; --j)
	{
		if (a[j] == 0)
			continue;
		long long ans = pow(2, j);
		printf("%lld ", ans);
	}
	return 0;
}
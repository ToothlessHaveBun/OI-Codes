#include <bits/stdc++.h>
#define lo long long
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN

using namespace std;
const int N = 1e7 + 10;
/*
    toothless. #17
    @fredcss_dev
*/

lo qpow(lo a, lo b, lo p) {
    lo result = 0;
    while (b) {
        if (b & 1) {
            result += a;
            result %= p;
        }
        b >>= 1;
        a += a;
        a %= p;
    }
    return result;
}

lo a, b, p; 

signed main()
{
	cin >> a >> b >> p;
	cout << qpow(a, b, p);
    return 0;
}
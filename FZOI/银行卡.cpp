#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
using namespace std;

/* toothless. #17 */

int n, pre, len;
string s;

int f(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int Get_ans(string s)
{
    int cnt = 0, sum = 0;
    for (int i = len - 2; i >= 0; i--)
    {
        ++cnt;
        if (cnt & 1)
            sum += f((s[i] - '0') * 2);
        else
            sum += s[i] - '0';
    }
    return sum * 9 % 10;
}

signed main()
{
    cin >> n >> s;
    len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'x')
        {
            pre = i;
            break;
        }
    }
    for (char i = '0'; i <= '9'; i++)
    {
        s[pre] = i;
        int ans = Get_ans(s);
        if (ans == s[len - 1] - '0')
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}
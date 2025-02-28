#include <iostream>
#include <vector>
using namespace std;

int n, q, mp[10005], g[10005], cnt = 0, a, b, c;

int main()
{
    cin >> n >> q;
    for (int i = 0; i <= n; i++)
    {
        mp[i] = 1;
        g[i] = i;
    }
    while (q--)
    {
        cin >> a;
        if (a == 1)
        {
            cin >> b >> c;
            if (mp[g[b]] == 2)
                cnt--;
            if (mp[c] == 1)
                cnt++;
            mp[g[b]]--;
            mp[c]++;
            g[b] = c;
        }
        else if (a == 2)
            cout << cnt << endl;
        return 0;
    }
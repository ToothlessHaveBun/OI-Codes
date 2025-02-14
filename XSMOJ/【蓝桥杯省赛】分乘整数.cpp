#include <iostream>
#define int long long
using namespace std;

signed main()
{
    int N;
    cin >> N;

    int count = 0;

    for (int i = 1; i <= N / 3; ++i)
    {
        for (int j = i + 1; j <= N / 2; ++j)
        {
            int k = N - i - j;
            if (k > j && k != 3 && k != 7 && i != 3 && i != 7 && j != 3 && j != 7 && k != 0)
            {
                ++count;
            }
        }
    }

    cout << count << endl;

    return 0;
}

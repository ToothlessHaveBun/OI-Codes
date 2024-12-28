#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;

// 判定函数：给定组的最小人数为x，判断是否可以分组
bool canGroup(const vector<int>& a, int x) {
    int n = a.size();
    int count = 0;  // 记录已经分成的组数量
    int group_size = 1;  // 当前组的队员人数

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1) {
            // 实力值连续，当前组人数增加
            group_size++;
        } else {
            // 实力值不连续，组结束
            if (group_size >= x) {
                count++;  // 记录一个符合条件的组
            }
            group_size = 1;  // 开始新组
        }
    }

    // 更新最后一组的判断
    if (group_size >= x) {
        count++;
    }

    // 如果我们可以将所有人分成符合条件的组，返回true
    return count * x <= n;
}

signed main()
{
    "toothless. #17";
        int n;
    cin >> n;  // 读取队员数量
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];  // 读取每个队员的实力值
    }

    // 对实力值进行排序
    sort(a.begin(), a.end());

    // 使用二分查找最小组人数的最大值
    int left = 1, right = n;
    int ans = 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canGroup(a, mid)) {
            // 如果可以分组，尝试更大的值
            ans = mid;
            left = mid + 1;
        } else {
            // 否则尝试更小的值
            right = mid - 1;
        }
    }

    // 输出最小的组人数的最大值
    cout << ans << endl;
    return 0;
}